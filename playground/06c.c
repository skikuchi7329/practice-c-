#include <stdio.h>
int main(void)
{
  int i;
  double j;
  printf("整数iの値は？");
  scanf_s("%d", &i);
  printf("整数iの値は %d です。 ¥n", i);
  printf("実数jの値は？");
  scanf_s("%lf", &j);
  printf("実数jの値は %f です。 ¥n");
  return 0;
}