/*
 * https://www.acmicpc.net/problem/17874
 */
#include <stdio.h>

#define BIGER(x, y) (x) > (y) ? (x) : (y)
#define THICKNESS 4

int main(void)
{
	int n, h, v;
	scanf("%d %d %d", &n, &h, &v);
	
	int GregH = BIGER(h, n-h);
	int GregV = BIGER(v, n-v);
	
	printf("%d\n", GregH * GregV * THICKNESS);
	return 0;
}
