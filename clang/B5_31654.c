//// https://www.acmicpc.net/problem/31654

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	puts(c - b == a ? "correct!" : "wrong!");
	return 0;
}
