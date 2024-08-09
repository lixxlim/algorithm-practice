/**
 * https://www.acmicpc.net/problem/25828
 */
#include <stdio.h>
#include <stdlib.h>

int main( void ) {
	int g, p, t;
	int gp, pt;
	int ret;
	
	scanf( "%d %d %d", &g, &p, &t );
	
	gp = g * p;
	pt = g + (p * t);
	ret = gp > pt ? 2 : gp < pt ? 1 : 0;
	
	printf( "%d\n", ret );
	
	return EXIT_SUCCESS;
}
