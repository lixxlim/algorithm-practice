/*
 * https://www.acmicpc.net/problem/16727
 */
#include <stdio.h>

int main(void)
{
	int p1, s1, s2, p2;
	scanf("%d %d\n%d %d", &p1, &s1, &s2, &p2);
	int pSum = p1 + p2;
	int sSum = s1 + s2;
	if (pSum == sSum) pSum += (p2 > s1) ? 1 : (p2 == s1) ? 0 : -1 ;
	puts(pSum > sSum ? "Persepolis" : pSum < sSum ? "Esteghlal" : "Penalty");
	return 0;
}
