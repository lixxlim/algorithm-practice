//// https://www.acmicpc.net/problem/13623
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int noWinner = a == b && b == c;
	int winA = a != b && b == c;
	int winB = b != a && a == c;
	int winC = c != a && a == b;
	if (noWinner) puts("*");
	if (winA) puts("A");
	if (winB) puts("B");
	if (winC) puts("C");
	return 0;
}
