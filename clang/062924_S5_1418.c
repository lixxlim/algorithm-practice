/*
 * https://www.acmicpc.net/problem/1418
 */
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//void makePrimeArr( int N, int *arr )
//{
//	long long i, j;
//	
//	for( i = 2; i <= N; i++ ) arr[ i ] = 1;
//	for( i = 2; i <= N; i++ )
//	{
//		if( arr[ i ] )
//		{
//			for( j = i * i; j <= N; j += i )
//			{
//				arr[ j ] = 0;
//			}
//		}
//	}
//}
//
//int getMaxDiv( int N, int *arr )
//{
//	int i;
//	
//	for( i = N / 2; i > 1; i-- )
//	{
//		if( N % i == 0 && arr[ i ] )
//		{
//			return i;
//		}
//	}
//	return N;
//}
//
//int main( void )
//{
//	int N;
//	int K;
//	int i;
//	int ret = 0;
//	int *arr;
//	
//	scanf( "%d\n%d", &N, &K );
//	arr = ( int * )malloc( ( N + 1 ) * sizeof( int ) );
//	makePrimeArr( N, arr );
//	
//	for ( i = N; i > 0; i-- )
//	{
//		if( getMaxDiv( i, arr ) <= K )
//		{
//			ret++;
//		}
//	}
//	
//	printf( "%d\n", ret );
//	free( arr );
//	return EXIT_SUCCESS;
//}

#include <stdio.h>
#include <stdlib.h>

#define MAX 100010

int main(void) {
    int n, k;
    int cnt = 0;
    int arr[MAX] = {0};  // 배열을 0으로 초기화

    // 입력 받기
    if (scanf("%d %d", &n, &k) != 2) {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }

    // 소인수 분해 과정
    for (int i = 2; i <= n; i++) {
        if (arr[i]) continue;
        for (int j = i; j <= n; j += i) {
            if (arr[j] < i) {
                arr[j] = i;
            }
        }
    }

    // k 이하의 가장 큰 소인수를 가진 수의 개수 세기
    for (int i = 1; i <= n; i++) {
        if (arr[i] <= k) {
            cnt++;
        }
    }

    // 결과 출력
    printf("%d\n", cnt);

    return 0;
}
