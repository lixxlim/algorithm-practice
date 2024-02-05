//// https://www.acmicpc.net/problem/5928

#include <stdio.h>

int main(void)
{
	int d, h, m, start = 11;
	scanf("%d %d %d", &d, &h, &m);
	start += (11 * 24 * 60) + (11 * 60);
	m += (d * 24 * 60) + (h * 60);
	printf("%d", m > start ? m - start : -1);
	return 0;
}
