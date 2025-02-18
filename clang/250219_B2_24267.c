/**
 * https://www.acmicpc.net/problem/24267
 */
#include <stdio.h>

int main( void )
{
	int i, j, k;
	long long n;
	long long cnt;
	
	scanf("%lld", &n);
	cnt = (n * (n - 1) * (n - 2)) / 6;
	
	printf("%lld\n", cnt);
	printf("%d\n", 3);
	return 0;
}
