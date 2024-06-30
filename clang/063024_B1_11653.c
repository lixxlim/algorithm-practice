/*
 * https://www.acmicpc.net/problem/11653
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primes[10000010];

void makePrimes( int N )
{
	int i, j;
	
	for( i = 1; i <= N; i++ ) primes[ i ] = 1;
	for( i = 4; i <= N; i++ )
	{
		if( primes[ i ] ) continue;
		for( j = i * 2; j <= N; j += i )
		{
			primes[ j ] = 0;
		}
	}
}

void printPrime( int N )
{
	int i;
	
	for( i = 2; i <= N; i++ )
	{
		if( N % i == 0 )
		{
			if( primes[ i ] )
			{
				printf( "%d\n", i );
			}
			else
			{
				printPrime( i );
			}
			printPrime( N / i );
			break;
		}
	}
}

int main( void )
{
	int N;
	int i;
	
	if( scanf( "%d", &N ) != 1 ) fprintf( stderr, "Error in scanf\n" );
	makePrimes( N );
	printPrime( N );
	
	return EXIT_SUCCESS;
}
