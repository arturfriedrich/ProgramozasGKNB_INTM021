#define DB 5

struct munka{
  string elvegzo;
  string azonosito;
  int kezdes;
  int hossz;
};

bool utkozes(struct munka m1, struct munka  m2){
  bool utkozik = false;
  if(m1.kezdes < m2.kezdes)
  {
    if((m1.kezdes + m1.hossz) > m2.kezdes) utkozik = true;
  }
  else if(m1.kezdes > m2.kezdes)
  {
    if((m2.kezdes + m2.hossz) > m1.kezdes) utkozik = true;
  }
  else utkozik = true;
  return utkozik;
}

void kiiratas(struct munka m){
  int befejezes = m.kezdes + m.hossz;
  cout << m.elvegzo << " " << m.azonosito << " " << m.kezdes << ":" << befejezes << endl;
}

void rendez(struct munka m[], int n) {
  struct munka csere;
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (m[j].elvegzo[0] > m[j + 1].elvegzo[0])
            {
                csere = m[j];
                m[j] = m[j + 1];
                m[j + 1] = csere;
            }
        }
    }
}