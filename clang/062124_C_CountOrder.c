/*
 * https://atcoder.jp/contests/abc150/tasks/abc150_c
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

int permutationIndex(int *perm, int n) {
	int index = 0;
	int factor = factorial(n);
	for (int i = 0; i < n; i++) {
		factor /= (n - i);
		int rank = 0;
		for (int j = i + 1; j < n; j++) {
			if (perm[j] < perm[i]) {
				rank++;
			}
		}
		index += rank * factor;
	}
	return index + 1;
}

int main( void ) {
	int i;
	int N;
	scanf( "%d", &N );
	
	int *P = ( int* )malloc( N * sizeof( int ) );
	int *Q = ( int* )malloc( N * sizeof( int ) );
	for( i = 0; i < N; i++ ) { scanf( "%d", &P[ i ] ); }
	for( i = 0; i < N; i++ ) { scanf( "%d", &Q[ i ] ); }
	
	int indexP = permutationIndex(P, N);
	int indexQ = permutationIndex(Q, N);
	
	printf( "%d\n", abs( indexP - indexQ ) );
	free( P );
	free( Q );
	
	return EXIT_SUCCESS;
}
