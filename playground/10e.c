#include <stdio.h>
int main(void) 
{
  int i, a[11];
  a[0] = 1;
  printf("a(0)=1¥n");
  for (i = 1; i < 11; i++) {
    a[i] = 2 * a[i - 1] + 1;
    printf("a(%d)=%d¥n", i, a[i]);
  }
  return 0;
}