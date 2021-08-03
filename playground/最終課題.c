#include <stdio.h>
int main(void)
{
  int i;
  for(i = 1; i < 1000; i++) {
    if(i % 3 == 0 || (i - 3) % 10 == 0 || ((i / 10) - 3) % 10 == 0 || ((i / 100) -3) % 10 == 0){
      printf("%d,", i);
    }
  }
  printf("3の倍数と3のつく数字を表示¥n");
  return 0;
}