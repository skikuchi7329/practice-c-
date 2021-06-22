#include <stdio.h>
int main(void)
{
  double s, i;
  for(i = 1.0; i <= 100.0; i++) {
    s += 1.0 / i;
  }
  printf("%d¥n", s);
  return 0;
}