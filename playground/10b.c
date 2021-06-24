#include <stdio.h>
int main(void) {
  int a[5] = { 5, 7, 2, 6, 10 };
  int s, i;
  s = 0;
  for (i = 0;i < 5; i++) {
    s += a[i];
  }
  printf("s=&d¥n", s);
  return 0;
}