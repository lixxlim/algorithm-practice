//// https://www.acmicpc.net/problem/31450

#include <stdio.h>

int main(void)
{
	int m, k;
	scanf("%d %d", &m, &k);
	puts(m % k ? "No" : "Yes");
	return 0;
}
