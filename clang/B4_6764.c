//// https://www.acmicpc.net/problem/6764

#include <stdio.h>

int main(void)
{
	int fish[4], i;
	int size = sizeof(fish) / sizeof(fish[0]);
	for (i = 0; i < size; i++) { scanf("%d", &fish[i]); }
	if (fish[0] == fish[1] && fish[1] == fish[2] && fish[2] == fish[3])
	{
		puts("Fish At Constant Depth");
	}
	else if (fish[0] < fish[1] && fish[1] < fish[2] && fish[2] < fish[3])
	{
		puts("Fish Rising");
	}
	else if (fish[0] > fish[1] && fish[1] > fish[2] && fish[2] > fish[3])
	{
		puts("Fish Diving");
	}
	else
	{
		puts("No Fish");
	}
	return 0;
}
