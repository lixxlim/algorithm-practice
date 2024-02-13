//// https://www.acmicpc.net/problem/6887

#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("The largest square has side length %d.", (int)sqrt(n));
	return 0;
}
