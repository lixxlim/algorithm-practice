//// https://www.acmicpc.net/problem/30007

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		int a, b, x;
		scanf("%d %d %d", &a, &b, &x);
		printf("%d\n", a * (x-1) + b);
	}
	return 0;
}
