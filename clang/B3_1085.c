//// https://www.acmicpc.net/problem/1085

#include <stdio.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
	int x, y, w, h;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	printf("%d", MIN(MIN(x,w-x),MIN(y,h-y)));
	return 0;
}
