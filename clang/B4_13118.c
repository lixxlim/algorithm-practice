// https://www.acmicpc.net/problem/13118

#include <stdio.h>

#define NUM_OF_PEOPLE 4

typedef struct {
	int x;
	int y;
	int r;	
} Apple;

int main(void)
{
	int people[NUM_OF_PEOPLE], i;
	for (i = 0; i < NUM_OF_PEOPLE; i++) scanf("%d", &people[i]);

	Apple apple;
	scanf("%d %d %d", &apple.x, &apple.y, &apple.r);
	
	int res = 0;
	for (i = 0; i < NUM_OF_PEOPLE; i++)
	{
		if(people[i] == apple.x)
		{
			res = i+1; 
			break; 
		}
	}
	
	printf("%d", res);
	return 0;
}
