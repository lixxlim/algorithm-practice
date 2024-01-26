//// https://www.acmicpc.net/problem/5300

#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d ", i);
		if (i % 6 == 0 || i == n)
		{
			printf("%s", "Go! ");
		}
	}
	return 0;
}
