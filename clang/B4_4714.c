//// https://www.acmicpc.net/problem/4714

#include <stdio.h>

int main(void)
{
	float weigh;
	scanf("%f", &weigh);
	while(weigh >= 0)
	{
		printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n", weigh, weigh * 0.167);
		scanf("%f", &weigh);
	}
	return 0;
}
