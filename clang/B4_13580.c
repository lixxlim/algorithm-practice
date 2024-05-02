//// https://www.acmicpc.net/problem/13580
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int canBack = (a == b || b == c || a == c || a + b == c || b + c == a || c + a == b);
	printf("%s\n", canBack ? "S" : "N");
	return 0;
}
