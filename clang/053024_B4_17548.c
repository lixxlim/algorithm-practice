/*
 * https://www.acmicpc.net/problem/17548
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EXIT_OK 0
#define MAX_SIZE 1001

int main(void)
{
	char greeting[MAX_SIZE];
	scanf("%s", greeting);
	
	int gSize = strlen(greeting);
	int eSize = gSize - 2;
	char *newGreeting = (char *)malloc((gSize + eSize) * sizeof(char));
	strncpy(newGreeting, greeting, gSize);
	strncpy(newGreeting + gSize - 1, greeting + 1, gSize -1);
	newGreeting[gSize*2-2] = '\0';
	
	puts(newGreeting);
	return EXIT_OK;
}
