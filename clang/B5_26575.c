//// https://www.acmicpc.net/problem/26575

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		double d, f, p;
		scanf("%lf %lf %lf", &d, &f, &p);
		printf("$%.2lf\n", d * f * p);
	}
	return 0;
}
