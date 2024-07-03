/*
 * https://atcoder.jp/contests/abc158/tasks/abc158_b
 */
#include <stdio.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)

int main( void )
{
  long long N, A, B;
  scanf( "%lld %lld %lld", &N, &A, &B );
  printf( "%lld\n", ( N / ( A + B ) ) * A + ( MIN( N % ( A + B ), A ) ) );
  return 0;
}
