//// https://www.acmicpc.net/problem/26545

#include <stdio.h>

int main(void)
{
	int n, i, sum = 0;
	scanf_s("%d", &n, sizeof(n));
	while(n--)
	{
		scanf_s("%d", &i, sizeof(n));
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
