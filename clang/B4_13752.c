// https://www.acmicpc.net/problem/13752

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int m;
		scanf("%d", &m);
		while(m--)
		{
			printf("%s", "=");
		}
		printf("\n");
	}
	return 0;
}
