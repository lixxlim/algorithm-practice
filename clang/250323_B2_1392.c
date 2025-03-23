/**
 * https://www.acmicpc.net/problem/1392
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	int n, m;
	int i, j, p = 0, in;
	int len = 0, *map = NULL, *akbo = NULL;
	
	scanf("%d %d", &n, &m);
	
	akbo = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		scanf("%d", &in);
		akbo[i] = in;
		len += in;
	}
	
	map = (int*)malloc(len * sizeof(int));
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < akbo[i]; j++)
		{
			map[p++] = i + 1;
		}
	}
	
	for (i = 0; i < m; i++)
	{
		scanf("%d", &in);
		printf("%d\n", map[in]);
	}
	
	free(map);
	free(akbo);
	return 0;
}
