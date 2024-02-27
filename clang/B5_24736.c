//// https://www.acmicpc.net/problem/24736

#include <stdio.h>

int sumArray(int* arr, int size);

int main(void)
{
	int teamA[5], teamB[5], i;
	for(i = 0; i < 5; i++) scanf("%d", &teamA[i]);
	for(i = 0; i < 5; i++) scanf("%d", &teamB[i]);
	
	printf("%d", sumArray(teamA, 5));
	printf(" %d", sumArray(teamB, 5));
	
	return 0;
}

int sumArray(int* arr, int size)
{
	int i, sum = 0, board[] = {6, 3, 2, 1, 2};
	for (i = 0; i < size; i++)
	{
		sum += arr[i] * board[i];
	}
	return sum;
}
