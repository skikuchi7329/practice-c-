#include <stdio.h>

int main(void) {
  int num;
  int i;

  printf("自然数を入力：¥n");
  scanf("%d", &num);
  if (num < 0) {
    printf("自然数を入力してください ¥n");
  }

  if ( num == 1) {
    printf("%d¥n", num);
  } else {
    for (i = 2; i <= num; i++){
      if(num % i ==0) {
        printf("%d", i);
        num = num / i;
        i = 1;
      }
    }
    return 0;
  }
}