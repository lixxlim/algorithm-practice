/*
 * https://www.acmicpc.net/problem/18198
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char log[201];
	scanf( "%s", log );
	int n = strlen(log);
	
	int pivot = 0, Alice = 0, Babara = 0, intPoint = 0;
	char person[2], point[2];
	while( n >= pivot )
	{
		// 타겟 문자열 처리
		strncpy(person, &log[pivot], 1);
		strncpy(point, &log[pivot+1], 1);
		person[1] = '\0';
		point[1] = '\0';
		intPoint = atoi(point);
		
		// 점수 더하기
		Alice  += strcmp(person, "A") ? 0 : intPoint;
		Babara += strcmp(person, "B") ? 0 : intPoint;
		pivot += 2;
	}
	
	puts(Alice > Babara ? "A" : "B");
	return EXIT_SUCCESS;
}
