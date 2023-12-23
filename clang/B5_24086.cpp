// https://www.acmicpc.net/problem/24086

#include <stdio.h>

int main() 
{
	int input[2];
	scanf("%d\n%d", &input[0], &input[1]);
	printf("%d", input[1] - input[0]);
	return 0;
}
