/*
 * https://www.acmicpc.net/problem/1384
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME 61

int main( void )
{
	// 변수선언
	int i, j;
	int groupNo = 1;
	int groupNum;
	
	while( 1 ) {
		// 그룹인원수 입력
		scanf( "%d", &groupNum );
		
		// 입력버퍼 비우기
		getchar();
		
		// 0이 입력되었을 경우 루프 종료
		if( !groupNum ) break;
		
		// 나쁜말 리스트를 저장할 숫자 배열
		//int **nastys = (int **)malloc( groupNum * sizeof( int* ) );
		int nastys[
		
		// 이름을 받을 포인터변수 선언
		//char **names = (char **)malloc( groupNum * sizeof( char* ) );
		
		// 그룹 인원수만큼 반복처리
		for( i = 0; i < groupNum; i++ ) {
			// 각 배열의 하위 포인터 선언
			nastys[ i ] = (int *)calloc( groupNum, sizeof( int ) );
			names[ i ] = (char *)malloc( MAXNAME * sizeof( char ) );
			
			// 아이들 이름 입력받기
			scanf( "%s", names[ i ] );
			printf("%d번 name: %s\n", i, names[ i ]);
			
			// 입력버퍼 비우기
			getchar();
				
			// 쪽지 입력 받기
			for( j = 0; j < groupNum; j++ ) {
				// 임시변수 선언
				char c;
				scanf( "%c", &c );
				
				// 입력버퍼 비우기
				getchar();
				
				// 만약 쪽지 글이 나쁜말이면 나쁜말 리스트에 누군지 추가
				if( c == 'N' ) {
					nastys[ i ][ ( abs(j - (groupNo-1)) + i ) % groupNo ] = 1;
					printf("i= %s[%d], j= %s[%d]\n", names[ i ], i, names[ ( abs(j - (groupNo-1)) + i ) % groupNo ], ( abs(j - (groupNo-1)) + i ) % groupNo ]);
				}
			}
		}
		
		// 누가 나쁜말 했는지 출력
		printf("Group %d\n", groupNo++);
		for( i = 0; i < groupNum; i++ ) {
			for( j = 0; j < groupNum; j++ ) {
				// 본인을 가리키는 포인터라면 패스하고 다음으로
				if( i == j ) continue;
				// j가 i에게 나쁜말 했음
				if( nastys[ i ][ j ] ) {
					printf("%s was nasty about %s\n", names[ j ], names[ i ]);
				}
			}
		}
		printf("\n");
		
		// 포인터 해제
		for( i = 0; i < groupNum; i++ ) {
			free( names[ i ] );
			free( nastys[ i ] );
		}
		free( names );
		free( nastys );
	}
	return EXIT_SUCCESS;
}
