// https://www.acmicpc.net/problem/6749

#include <stdio.h>

int main(void)
{
	int young, middle, high;
	scanf("%d\n%d", &young, &middle);
	high = middle * 2 - young;
	printf("%d", high);
	return 0;
}
