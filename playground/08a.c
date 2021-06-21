#include <stdio.h>
int main(void)
{
  int s, n;
  s = 0;
  printf("nの値を入力：");
  scanf_s("%d", &n);
  while (n > 0) {
    s += n * n;
    n--;
  }
  printf("s=%d¥n", s);
  return 0;
}