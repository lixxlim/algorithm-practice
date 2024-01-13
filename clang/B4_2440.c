// https://www.acmicpc.net/problem/2440

#include <stdio.h>

int main() {
	int n, i;
	scanf("%d", &n);
	for (i = n; i > 0; i--)
	{
		int j = 0;
		for (j; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
