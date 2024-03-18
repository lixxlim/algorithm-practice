//// https://www.acmicpc.net/problem/29863

#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d\n%d", &n, &m);
	
	int slip = n > 19 ? 24 - n + m : 0 - n + m;
	printf("%d", slip);
	return 0;
}
