// https://www.acmicpc.net/problem/10757

#include <stdio.h>
#include <string.h>

/* ====================================
 * 역순 정렬 메서드 
 * ====================================*/
void reverse(char arr[])
{
	int len = strlen(arr);
	for (int i = 0; i < len/2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[(len-1) - i];
		arr[(len-1) - i] = temp;
	};
}

/* ====================================
 * 더하기 메서드 
 * ====================================*/
void add(char arrA[], char arrB[], char arrResult[])
{
	int carry = 0;
	int lenA = strlen(arrA);
	int lenB = strlen(arrB);
	int len = lenA > lenB ? lenA : lenB;
	
	for (int i = 0; i < len; i++)
	{
		int digitA = (i < lenA) ? arrA[i] - '0' : 0 ;
		int digitB = (i < lenB) ? arrB[i] - '0' : 0 ;
		
		int sum = digitA + digitB + carry;
		carry = sum / 10 ;
		//// 결과 배열에 입력 
		arrResult[i] = (sum % 10) + '0';
	}
	
	//// 가장 마지막 계산 후에 자릿수 올림이 있을 경우, 가장 끝에 1을 추가 
	if (carry == 1)
	{
		arrResult[len] = '1';
		len++;
	}
	
	arrResult[len] = '\0';
}

/* ====================================
 * 메인 메서드 
 * ====================================*/
int main()
{
	//// 배열 선언 
	char strA[10002], strB[10002], result[10004];
	
	//// 입력 
	scanf("%s %s", strA, strB);
	
	//// 입력받은 배열을 역순 정렬 
	reverse(strA);
	reverse(strB);
	
	//// 입력받은 배열을 더해서 결과 배열로 전달 
	add(strA, strB, result);
	
	//// 결과 배열을 다시 역순 정렬 
	reverse(result);
	
	//// 결과 출력 
	printf("%s\n", result);
	
	//// 프로그램 종료 
	return 0;
}

