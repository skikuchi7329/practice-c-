#include <stdio.h>
int main(void)
{
  int uriage;
  printf("売値を入力：");
  scanf_s("%d", &uriage);
  if (uriage >= 10000) {
    uriage = uriage * 0.9;
  }
  printf("実際の売値は%d円¥n", uriage);
  return 0;
}