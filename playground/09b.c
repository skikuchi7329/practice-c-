#include <stdio.h>
int main(void) 
{
  int a, i;
  a = 0;
  for (i = 1; i <= 50; i++) {
    a += i;
  }
  printf("1 + 2 + ・・・ + 50 = %d¥n", a);
  return 0;
}