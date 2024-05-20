/*
 * https://www.acmicpc.net/problem/16017
 */
#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	if (a > 7 && d > 7 && b == c) { puts("ignore"); } 
	else { puts("answer"); }
	return 0;
}
