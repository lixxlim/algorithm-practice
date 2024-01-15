// https://www.acmicpc.net/problem/2845

#include <stdio.h>

int main(void) {
	// input
	int L, P, a, b, c, d, e;
	scanf("%d %d", &L, &P);
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	// calculate
	int LP = L * P;
	a -= LP;
	b -= LP;
	c -= LP;
	d -= LP;
	e -= LP;
	
	// output
	printf("%d %d %d %d %d", a, b, c, d, e);
	return 0;
}
