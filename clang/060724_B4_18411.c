/*
 * https://www.acmicpc.net/problem/18411
 */
#include <stdio.h>
#include <stdlib.h>

int compare( const void *a, const void *b )
{
	int int_a = *((int*)a);
	int int_b = *((int*)b);
	if( int_a > int_b ) return -1;
	if( int_a < int_b ) return 1;
	return 0;
}

int main( void )
{
	int i;
	int arr[3];
	
	for( i = 0; i < 3; i++ ) scanf( "%3d", &arr[i] );
	qsort( arr, sizeof(arr) / sizeof(int), sizeof(int), compare );
	printf( "%d\n", arr[0] + arr[1] );
	
	return EXIT_SUCCESS;
}
