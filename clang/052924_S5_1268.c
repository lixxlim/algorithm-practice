/*
 * https://www.acmicpc.net/problem/1268
 */
#include <stdio.h>
#include <stdlib.h>

#define EXIT_OK 0
#define COLS 5

int getSameClassFrends(int target, int rows, int cols, int** classMap)
{
	int i, j, res = 0;
	for( i = 0; i < rows; i++)
	{
		if( i == target ) continue;
		for( j = 0; j < cols; j++)
		{
			if( classMap[target][j] == classMap[i][j] )
			{
				res++;
				break;
			}
		}
	}
	return res;
}

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	
	// Get input
	int **classMap = (int **)malloc(n * sizeof(int *));
	for( i = 0; i < n; i++ )
	{
		classMap[i] = (int *)malloc(COLS * sizeof(int));
		for( j = 0; j < COLS; j++)
		{
			scanf("%d", &classMap[i][j]);
		}
	}
	
	// Check person of frends
	int *rank = (int *)malloc(n * sizeof(int));
	for( i = 0; i < n; i++ )
	{
		rank[i] = getSameClassFrends(i, n, COLS, classMap);
	}
	
	// Get Class-president
	int maxIndex = 0;
	int maxValue = rank[0];
	for( i = 1; i < n; i++ )
	{
		if( rank[i] > maxValue )
		{
			maxValue = rank[i];
			maxIndex = i;
		}
	}
	printf("%d\n", maxIndex+1);
	
	// Free memory
	free(rank);
	for( i = 0; i < n; i++ )
	{
		free(classMap[i]);
	}
	free(classMap);
	
	return EXIT_OK;
}
