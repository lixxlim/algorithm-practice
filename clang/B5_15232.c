//// https://www.acmicpc.net/problem/15232

#include <stdio.h>

int main(void)
{
	int r, c;
	scanf("%d\n%d", &r, &c);
	
	while(r--)
	{
		int c2 = c;
		while(c2--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
