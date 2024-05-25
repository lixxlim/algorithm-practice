/*
 * https://www.acmicpc.net/problem/17009
 */
#include <stdio.h>

int main(void)
{
	int a3, a2, a1, b3, b2 ,b1;
	scanf("%d\n%d\n%d\n%d\n%d\n%d", &a3, &a2, &a1, &b3, &b2, &b1);
	int aSum = a3 *3 + a2 *2 + a1;
	int bSum = b3 *3 + b2 *2 + b1;
	puts(aSum == bSum ? "T" : aSum > bSum ? "A" : "B");
	return 0;
}
