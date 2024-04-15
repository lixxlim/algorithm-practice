// https://www.acmicpc.net/problem/11943

#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d %d\n%d %d", &a, &b, &c, &d);
	int g1 = a + d, g2 = b + c;
	printf("%d", g1 < g2 ? g1 : g2);
	return 0;
}
