//// https://www.acmicpc.net/problem/14652
#include <stdio.h>

int main(void)
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	printf("%d %d\n", k/m, k%m);
	return 0;
}
