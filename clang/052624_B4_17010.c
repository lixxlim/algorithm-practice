/*
 * https://www.acmicpc.net/problem/17010
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i, L, cur = 0;
	scanf("%d", &L);
	char *chr = (char *)malloc(L * 81);
	for (i = 0; i < L; i++)
	{
		int N;
		char x;
		scanf("%d %c", &N, &x);
		memset(chr + cur, x, N);
		chr[cur+N] = '\n';
		cur += N + 1;
	}
	chr[cur-1] = '\0';
	puts(chr);
	free(chr);
	return 0;
}
