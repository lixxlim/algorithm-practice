/*
 * https://www.acmicpc.net/problem/18398
 */
#include <stdio.h>

#define SUCCESS 0;

int main( void )
{
	int t;       // Number of test case
	int n;       // Number of problems
	int a, b;    // Target amount
	
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		while(n--)
		{
			scanf("%d %d", &a, &b);
			printf("%d %d\n", a+b, a*b);
		}
	}
	return SUCCESS;
}
