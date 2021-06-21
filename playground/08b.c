#include <stdio.h>
int mian(void)
{
  int a, i;
  a = 0;
  i = 1;
  while (i <= 50) {
    a += i;
    i++;
  }
  printf("1 + 2 + ・・・ + 50 = %d¥n", a);
  return 0;
}