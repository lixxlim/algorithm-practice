/*
 * https://www.acmicpc.net/problem/1427
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap( int* a, int* b ) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main( void ) {
	char str[ 11 ];
	int len, n;
	int i, j;
	int* arr;
	
	// 입력값 처리
	scanf( "%s", str );
	len = n = strlen( str );
	arr = calloc( len, sizeof( int ));
	for( i = 0; i < len; i++ ) {
		arr[ i ] = str[ i ] - '0';
	}
	
	// 버블소팅
	for( i = 0; i < len; i++ ) {
		for( j = i+1; j < len; j++ ) {
			if( arr[ i ] < arr[ j ] ) {
				swap( &arr[ i ], &arr[ j ] );
			}
		}
	}
	
	// 출력
	for( i = 0; i < len; i++ ) {
		printf( "%d", arr[ i ] );
	}
	puts("");
	
	// 메모리 해제
	free( arr );
	
	return EXIT_SUCCESS;
}
