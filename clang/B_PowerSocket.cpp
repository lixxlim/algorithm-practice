// https://atcoder.jp/contests/abc139/tasks/abc139_b

#include <stdio.h>

int main(void)
{
  int a, b, guchi = 1, result = 0;
  scanf("%d %d", &a, &b);
  while (guchi < b) 
  { 
    guchi += (a-1);
    result++;
  }
  printf("%d", result);
  return 0;
}
