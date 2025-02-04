/**
 * https://www.acmicpc.net/problem/3009
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct Coodi {
	int x;
	int y;
} Coodi;

int main ( void )
{
	int x, y, i;
	Coodi *coodis;
	Coodi coodi;
	
	coodis = ( Coodi* ) malloc( 3 * sizeof( Coodi ) );
	for ( i = 0; i < 3; i++ )
	{
		scanf( "%d %d", &x, &y );
		coodis[ i ].x = x;
		coodis[ i ].y = y;
	}
	coodi.x = ( coodis[ 0 ].x == coodis[ 1 ].x ) ? 
			  ( coodis[ 0 ].x == coodis[ 2 ].x ? coodis[ 1 ].x : coodis[ 2 ].x ) :
			  ( coodis[ 1 ].x == coodis[ 2 ].x ? coodis[ 0 ].x : coodis[ 1 ].x ) ;
	coodi.y = ( coodis[ 0 ].y == coodis[ 1 ].y ) ? 
			  ( coodis[ 0 ].y == coodis[ 2 ].y ? coodis[ 1 ].y : coodis[ 2 ].y ) :
			  ( coodis[ 1 ].y == coodis[ 2 ].y ? coodis[ 0 ].y : coodis[ 1 ].y ) ;
	printf( "%d %d\n", coodi.x, coodi.y );
	
	free( coodis );
	return 0;
};
