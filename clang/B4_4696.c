//// https://www.acmicpc.net/problem/4696

#include <stdio.h>

int main(void)
{
	double n;
	scanf("%lf", &n);
	while(n)
	{
		printf("%.2lf\n", 1 + n + n*n + n*n*n + n*n*n*n);
		scanf("%lf", &n);
	}
	return 0;
}
