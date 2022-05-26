double determinant2x2(double** mtx, const int dimr, const int dimc)
{
  double det = 0;
  if(dimr == 2 && dimc == 2)
  {
    det = mtx[0][0]*mtx[1][1] - mtx[0][1]*mtx[1][0];
  }
  return det;
}