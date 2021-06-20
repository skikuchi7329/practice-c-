#include <stdio.h>
int main(void)
{
  int ondo;
  printf("温度を入力： ");
  scanf_s("%d", &ondo);
  if (ondo >= 26) {
    printf("HOT¥n");
  } else if (ondo <= 15) {
    printf("COLD¥n"); 
  } else {
    printf("WELL¥n");
  }
  return 0;
}