//// https://www.acmicpc.net/problem/8710

#include <stdio.h>
#include <math.h>

int main() {
	float k, w, m;
	scanf("%f %f %f", &k, &w, &m);
	printf("%d", (int)ceil((w-k)/m));
	return 0;
}
