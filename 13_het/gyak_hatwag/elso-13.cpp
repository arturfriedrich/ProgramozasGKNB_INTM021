// az elso-13.cpp a 12. heti szelearning anyagait tartalmazzák!
// a 13. heti anyagot nem volt egy 14. alkalom ahol vehettük volna!

#include <cstdlib>
#include <iostream>
#include <stdlib.h>


enum NodeType { OBJECT, STR, INT, BOOL, LIST };

struct Node;

struct List {
  Node* node;
  List* next;
};

union ValueType {
  List* first;
  std::string strValue;
  int intValue;
  bool boolValue;
};

struct Node {
  std::string key;
  NodeType type;
  ValueType value;
};

Node *createNode(std::string key, int value) {
  Node *np = (Node *)malloc(sizeof(Node));
  np->key = key;
  np->type = INT;
  np->value.intValue = value;
  return np;
}

Node *createNode(std::string key, std::string value) {
  Node *np = (Node *)malloc(sizeof(Node));
  np->key = key;
  np->type = STR;
  np->value.strValue = value;
  return np;
}

Node *createNode(std::string key, bool value) {
  Node *np = (Node *)malloc(sizeof(Node));
  np->key = key;
  np->type = BOOL;
  np->value.first = nullptr;
  return np;
}

Node *createNode(std::string key, NodeType type) {
  if(type!=LIST and type!=OBJECT) return nullptr;
  Node *np = (Node *)malloc(sizeof(Node));
  np->key = key;
  np->type = type;
  np->value.first = nullptr;
  return np;
}

bool addChild(Node* parent, Node* child) {
  if(parent->type!=LIST and parent->type!=OBJECT) return false;
  List* newList = new List;
  newList->node = child;
  if(parent->type == OBJECT) {
    newList->next = parent->value.first;
    parent->value.first = newList;
  } else {
    
  }
  return true;
}

int main() {
  Node *root = createNode("abc123", OBJECT);
  addChild(root, createNode("nev", "Jozsi"));
  addChild(root, createNode("eletkor", 23));
  addChild(root, createNode("boldog", false));
  
  
}