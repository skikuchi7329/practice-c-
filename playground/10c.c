#include <stdio.h>
int main(void) 
{
  int i, s1, s2;
  int a[] = { 92, 73, 86, 63, 11};
  int b[] = { 23, 35, 85, 33, 81};
  s1 = 0;
  s2 = 0;
  for (i = 0; i < 5; i++) {
    s1 += a[i];
  }
  printf("合計 s1 = %d¥n", s1);
  for (i = 0; i < 5; i++) {
    s2 += b[i];
  }
  printf("合計 s2 = %d¥n", s2);
  return 0;
}