//// https://www.acmicpc.net/problem/30676
#include <stdio.h>

typedef struct {
	char* name;
	int underLine;
} color;

const color colorIndex[] = {
	{ "Red", 	620 },
	{ "Orange", 590 },
	{ "Yellow", 570 },
	{ "Green", 	495 },
	{ "Blue", 	450 },
	{ "Indigo", 425 },
	{ "Violet", 380 },
};

int main(void) 
{
	int n;
	scanf("%d", &n);
	if(n < 379 || n > 780) return 1;
	
	int i, len = sizeof(colorIndex) / sizeof(color);
	for (i = 0; i < len; i++) 
	{
		if(n >= colorIndex[i].underLine) { puts(colorIndex[i].name); break; }
	}
	return 0;
}
