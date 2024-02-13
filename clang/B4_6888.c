//// https://www.acmicpc.net/problem/6888

#include <stdio.h>

int main(void)
{
	int n1, n2;
	scanf("%d\n%d", &n1, &n2);
	for (n1; n1 <= n2; n1+=60)
	{
		printf("All positions change in year %d\n", n1);
	}
	return 0;
}
