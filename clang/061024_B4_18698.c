/*
 * https://www.acmicpc.net/problem/18698
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( void )
{
	int n;
	int i;
	char step[ 101 ];
	int int_step;
	
	scanf( "%d", &n );
	while( n-- )
	{
		step[ 0 ] = '\0';
		scanf("%s", step);
		
		int_step = 0;
		for( i = 0; i < sizeof( step ); i++ )
		{
			if( strncmp( &step[ i ], "U", 1 ) )
			{
				break;
			}
			int_step++;
		}
		
		printf( "%d\n", int_step );
	}
	
	return EXIT_SUCCESS;
}
