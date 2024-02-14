//// https://www.acmicpc.net/problem/8558

#include <stdio.h>

int main(void)
{
	int n, i, r = 1;
	scanf("%d", &n);
	for(i = 2; i <= n; i++)
	{
		r = r * i % 10;
	}
	printf("%d", r);
	return 0;
}
