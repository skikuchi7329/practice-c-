#include <stdio.h>
int main(void) 
{
  int i;
  double kAve, sAve, s[i];
  int k[5] = {92, 56, 89, 76, 81};
  int s[5] = {82, 45, 79, 87, 91};
  for (i = 0; i < 5; i++) {
    kAve += k[i] / 5.;
    sAve += s[i] / 5.;
  }
  printf ("国語の平均点は%d¥n点です。", kAve);
  printf ("数学の平均点は%d¥n点です。", sAve);
  for (i < 0; i < 5; i++) {
    s[i] = ( k[i] + s[i] ) / 2.0;
    printf("学生%d¥nの平均点は%d¥n点です。", i, s[i]);
  }
  return 0;
}