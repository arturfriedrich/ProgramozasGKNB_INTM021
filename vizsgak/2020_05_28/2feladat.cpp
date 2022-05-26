double addMatrix(
	double** mtx1, const int dimr1, const int dimc1,
	double** mtx2, const int dimr2, const int dimc2,
	double** res)
{
    for(int s=0; s<dimr1; s++)
      {
        for(int o=0; o<dimc1; o++)
          {
            res[s][o] = mtx1[s][o] + mtx2[s][o];
          }
      }
    double spur = 0;
    if(dimr1 == dimc1 && dimr2 == dimc2)
    {
      for(int i=0; i<dimr1; i++)
        {
          spur += res[i][i];
        }
    }
    return spur;
}