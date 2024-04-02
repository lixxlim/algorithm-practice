//// https://www.acmicpc.net/problem/31611

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", (n-2)%7 == 0 ? 1 : 0);
	return 0;
	
}
