// https://www.acmicpc.net/problem/2530

#include <stdio.h>

int main() {
	int h, m, s, t;
	scanf("%d %d %d\n %d", &h, &m, &s, &t);
	
	// second
	s += t;
	m += s / 60;
	s %= 60;
	
	// minute
	h += m / 60;
	m %= 60;
	
	// hour
	h %= 24;
	
	printf("%d %d %d", h, m, s);
	
	return 0;
}
