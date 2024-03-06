//// https://www.acmicpc.net/problem/27433

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	long long result = 1;
	while(n > 1)
	{
		result *= n--;
	}
	
	printf("%lld", result);
	return 0;
}
