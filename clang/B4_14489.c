//// https://www.acmicpc.net/problem/14489

#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d\n%d", &a, &b, &c);
	int sum = a + b;
	int chiken2 = c * 2;
	printf("%d", sum - chiken2 >= 0 ? sum - chiken2 : sum);
	return 0;	
}
