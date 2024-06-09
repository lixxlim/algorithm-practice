/*
 * https://www.acmicpc.net/problem/18691
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int T;
	int G, C, E;
	int ret;
	
	scanf("%d", &T);
	
	while(T--)
	{
		ret = G = C = E = 0;
		scanf("%d %d %d", &G, &C, &E);
		if( E > C )
		{
			switch(G)
			{
				case 1:
					ret = E - C;
					break;
				case 2:
					ret = (E - C) * 3;
					break;
				case 3:
					ret = (E - C) * 5;
					break;
			}
		}
		printf("%d\n", ret);
	}
	
	return EXIT_SUCCESS;
}
