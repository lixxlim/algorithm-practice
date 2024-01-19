// https://www.acmicpc.net/problem/5554

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
	a += b + c + d;
	printf("%d\n%d\n", a/60, a%60);
	return 0;
}
