//// https://www.acmicpc.net/problem/5717

#include <stdio.h>

int main(void)
{
	int M, F;
	scanf("%d %d", &M, &F);
	while(M+F)
	{
		printf("%d\n", M + F);
		scanf("%d %d", &M, &F);
	}
	return 0;
}
