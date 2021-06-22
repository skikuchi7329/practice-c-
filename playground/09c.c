#include <stdio.h>
int main(void)
{
  int i;
  for (i = 1, i <= 150, i++) {
    if (i % 16 == 0) {
      printf("%d¥n", i);
    }
  }
  return 0;
}