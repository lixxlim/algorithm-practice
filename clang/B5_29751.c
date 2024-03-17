//// https://www.acmicpc.net/problem/29751

#include <stdio.h>

int main(void)
{
	float w, h;
	scanf("%f %f", &w, &h);
	
	printf("%.1f", (w*h) / 2);
	return 0;
}
