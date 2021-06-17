#include <stdio.h>
int main(void)
{
  int i, j;
  int pl, mi, mu, di;
  i = 50;
  j = 20;
  pl = i + j;
  mi = i - j;
  mu = i * j;
  di = i / j;
  printf("i+j=%d¥n", pl);
  printf("i-j=%d¥n", mi);
  printf("i*j=%d¥n", mu);
  printf("i/j=%d¥n", di);
  return 0;
}