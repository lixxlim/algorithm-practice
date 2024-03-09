//// https://www.acmicpc.net/problem/28113

#include <stdio.h>

int main(void)
{
	int n, a, b;
	scanf("%d %d %d", &n, &a, &b);
	if (n > b) puts("Bus");
	else if (a > b) puts("Subway");
	else if (a < b) puts("Bus");
	else puts("Anything");
	return 0;
}
