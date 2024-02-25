//// https://www.acmicpc.net/problem/24568

#include <stdio.h>

int main(void)
{
	int regular, small;
	scanf("%d\n%d", &regular, &small);
	
	int result = regular*8 + small*3 - 28;
	
	printf("%d", result > 0 ? result : 0);
	return 0;
}
