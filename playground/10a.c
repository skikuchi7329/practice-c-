#include <stdio.h>
int main(void)
{
  int x, y, i, j;
  printf("横の数xを入力：");
  scanf_s("%d", &x);
  printf("縦の数yを入力：");
  scanf_s("%d", &y);
  for (j - 1; j <= y; j++) {
    for (i = 1; i <= x; i++) {
      printf("@");
    }
    printf("¥n");
  }
  return 0;
}