// https://www.acmicpc.net/problem/11948

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define SCIENCE_NUM 4
#define SOCIETY_NUM 2

int sumArray(int* arr, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int findMin(int* arr, int size)
{
	int i, min = INT_MAX;
	for (i = 0; i < size; i++)
	{
		min = arr[i] < min ? arr[i] : min;
	}
	return min;
}

int main(void)
{
	int science[SCIENCE_NUM], society[SOCIETY_NUM], i;
	int scienceSize = sizeof(science)/sizeof(int);
	int societySize = sizeof(society)/sizeof(int);
	
	for (i = 0; i < scienceSize; i++) scanf("%d", &science[i]);
	for (i = 0; i < societySize; i++) scanf("%d", &society[i]);
	
	int scienceSum = sumArray(science, scienceSize) - findMin(science, scienceSize);
	int societySum = sumArray(society, societySize) - findMin(society, societySize);
	printf("%d\n", scienceSum + societySum);
	
	return EXIT_SUCCESS;
}
