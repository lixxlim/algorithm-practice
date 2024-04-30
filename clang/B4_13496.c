//// https://www.acmicpc.net/problem/13496
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int dist;
	int money;
} Ship;

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int num, speed, days, j, result = 0;
		Ship* ships = malloc(sizeof(Ship) * num);
		
		scanf("%d %d %d", &num, &speed, &days);
		int canMove = speed * days;
		
		for (j = 0; j < num; j++)
		{
			int _dist, _money;
			scanf("%d %d", &_dist, &_money);
			ships[i].dist = _dist;
			ships[i].money = _money;
			if (ships[i].dist <= canMove) result += ships[i].money;
		}

		printf("Data Set %d:\n%d\n\n", i+1, result);
		free(ships);
	}
	return 0;
}
