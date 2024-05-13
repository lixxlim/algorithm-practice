/*
 * https://www.acmicpc.net/problem/15080
 */
#include <stdio.h>

int main(void)
{
	int oneday = 24 * 60 * 60;
	int h1, m1, s1, h2, m2, s2;
	scanf("%d : %d : %d\n%d : %d : %d", &h1, &m1, &s1, &h2, &m2, &s2);
	s1 += (h1 * 60 * 60) + (m1 * 60);
	s2 += (h2 * 60 * 60) + (m2 * 60);
	printf("%d\n", s1 < s2 ? s2 - s1 : oneday - s1 + s2);
	return 0;
}
