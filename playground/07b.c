#include <stdio.h>
int main(void)
{
  int nenrei, ryokin;
  printf("年齢を入力：");
  scanf_s("%d", &nenrei);
  if (nenrei <= 13) {
    ryokin =500;
  } else {
    ryokin = 1000;
  }
  printf("入園料をは%d円¥n", ryokin);
  return 0;
}