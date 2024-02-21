//// https://www.acmicpc.net/problem/10039

#include <stdio.h>

int main(void)
{
	// Input
	int score[5], i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] < 40)
		{
			score[i] = 40;
		}
	}
	
	// Get sum of list
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	
	// Output
	printf("%d", sum / 5);
	
	// Exit
	return 0;
}
