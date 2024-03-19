//// https://www.acmicpc.net/problem/27328

#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d\n%d", &a, &b);
	printf("%d", ((a-b) > 0) - ((a-b) < 0));
	return 0;
}
