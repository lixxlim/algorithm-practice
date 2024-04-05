//// https://www.acmicpc.net/problem/10480

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	while(n--)
	{
		int x;
		scanf("%d", &x);
		printf("%d is %s\n", x, x & 1 ? "odd" : "even");
	}
	
	return 0;
}
