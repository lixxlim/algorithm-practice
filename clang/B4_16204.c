//// https://www.acmicpc.net/problem/16204
#include <stdio.h>

int main(void)
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d\n", m > k ? (n-m) + k : (n-k) + m);
	return 0;
}
