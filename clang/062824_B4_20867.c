/*
 * https://www.acmicpc.net/problem/20867
 */
#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int M; /* 계단 수 */
	int G; /* 초당 걸었을 때 이동량 */
	int S; /* 초당 에스컬레이터 이동량 */
	float A; /* 초당 시작가능한 걷기 인원 */
	float B; /* 초당 시작가능한 에스컬레이터 인원 */
	int L; /* 현재 에스컬레이터 걷기 대기 인원 */
	int R; /* 현재 에스컬레이터 에스컬레이터 대기 인원 */
	float wak; /* 걸어 올라갈 때 걸리는 시간 */
	float elv; /* 서서 올라갈 때 걸리는 시간 */
	
	scanf( "%d %d %d", &M, &S, &G );
	scanf( "%f %f", &A, &B );
	scanf( "%d %d", &L, &R );
	
	wak = ( M / G ) + ( L / A );
	elv = ( M / S ) + ( R / B );
	
	puts( wak > elv ? "latmask" : "friskus" );
	return EXIT_SUCCESS;
}
