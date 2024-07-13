/*
 * https://www.acmicpc.net/problem/20336
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i, j, k;    /* 플래그 변수      */
	int n;          /* 세트 갯수        */
	int d;          /* 메뉴 갯수        */
	int* sets;      /* 세트별 메뉴 갯수 */
	char** menus;   /* 메뉴 배열        */
	
	/// 입력
	scanf( "%d", &n ) && getchar( );
	menus = ( char** )malloc( n * sizeof( char* ));
	sets = ( int * )malloc( n * sizeof( int ));
	for( i = 0; i < n; i++ )
	{
		scanf( "%d", &d );
		menus[ i ] = ( char * )calloc( d, 21 * sizeof( char ));
		sets[ i ] = d;
		for( j = 0; j < d; j++ )
		{
			scanf( "%s", menus[ i ] + ( j * 21 ));
		}
	}
	
	/// 계산 및 출력
	srand( time( NULL ));
	k = ( rand( ) % n );
	printf( "%d\n", sets[ k ] );
	for( i = 0; i < sets[ k ]; i++ )
	{
		printf( "%s\n", menus[ k ] + ( i * 21 ));
	}
	
	/// 메모리 해제
	for( i = 0; i < n; i++ )
	{
		free( menus[ i ] );
	}
	free( menus );
	free( sets );
	
	return EXIT_SUCCESS;
}
