//// https://www.acmicpc.net/problem/7595

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n)
	{
		int i = 0;
		while(n - i++)
		{
			int j;
			for(j = 0; j < i; j++)
			{
				printf("*");
			}
			puts("");
		}
		scanf("%d", &n);
	}
	return 0;
}
