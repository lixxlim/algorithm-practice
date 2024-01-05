// https://www.acmicpc.net/problem/21300

#include <stdio.h>

int main() {
	int input, sum;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &input);
		sum += input * 5;
	}
	printf("%d", sum);
	return 0;
}
