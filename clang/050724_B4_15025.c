//// https://www.acmicpc.net/problem/15025
#include <stdio.h>

int main(void)
{
	int r, l;
	scanf("%d %d", &r, &l);
	if (r + l == 0) { puts("Not a moose"); }
	else if (r == l) { printf("%s %d\n", "Even", r+l); }
	else { printf("%s %d\n", "Odd", r > l ? r * 2 : l * 2); }
	return 0;
}
