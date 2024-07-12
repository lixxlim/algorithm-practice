/*
 * https://www.acmicpc.net/problem/22155
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int w, f;
		scanf("%d %d", &w, &f);
		puts(w+f < 4 && w < 3 && f < 3 ? "Yes" : "No");
	}
	return EXIT_SUCCESS;
}
