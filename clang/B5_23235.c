//// https://www.acmicpc.net/problem/23235

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[100001];
	int i = 1;
	while(atoi(fgets(str, sizeof(str), stdin)))
	{
		printf("Case %d: Sorting... done!\n", i++);
	}
	return 0;
}
