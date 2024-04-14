//// https://www.acmicpc.net/problem/9699

#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int loop = 5, max = 0, num;
		while(loop--)
		{
			scanf("%d", &num);
			max = max > num ? max : num;
		}
		printf("Case #%d: %d\n", i, max);
	}
	return 0;
}
