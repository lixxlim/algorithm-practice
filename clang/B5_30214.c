//// https://www.acmicpc.net/problem/30214

#include <stdio.h>

int main(void)
{
	int s1, s2;
	scanf("%d %d", &s1, &s2);
	printf("%c", s1*2 >= s2 ? 'E':'H');
	return 0;
}
