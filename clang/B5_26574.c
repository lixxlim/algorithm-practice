//// https://www.acmicpc.net/problem/26574

#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &m);
		printf("%d %d\n", m, m);
	}
	return 0;
}
