#include <stdio.h>
int main(void)
{
  double i, j;
  double pl, mi, mu, di;
  i = 50.;
  j = 20.;
  pl = i + j;
  mi = i - j;
  mu = i * j;
  di = i / j;
  printf("i+j=%f¥n", pl);
  printf("i-j=%f¥n", mi);
  printf("i*j=%f¥n", mu);
  printf("i/j=%f¥n", di);
  return 0;
}