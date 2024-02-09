//// https://www.acmicpc.net/problem/6810

#include <stdio.h>

int main(void)
{
	int i = 3, n, sum = 91;
	while(i--)
	{
		scanf("%d", &n);
		if(i == 1) n *= 3;
		sum += n;
	}
	printf("THe 1-3-sum is %d", sum);
	return 0;
}
