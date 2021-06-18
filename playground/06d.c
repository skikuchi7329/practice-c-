#include <stdio.h>
int main(void)
{
  double f, c;
  printf("華氏の温度を入力:");
  scanf_s("%lf", &f);
  c = (5.0 / 9.0) * (f - 32.);
  printf("華氏  %.1f 度は、摂氏 %.1f 度¥n", f, c);
  return 0;
}