/*
 * https://www.acmicpc.net/problem/1340
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef struct {
	char name[ 10 ];
	int num;
	int days;
} Month;

Month monthList[ ] = {
	{ "January"  ,  1 , 31 },
	{ "February" ,  2 , 28 },
	{ "March"    ,  3 , 31 },
	{ "April"    ,  4 , 30 },
	{ "May"      ,  5 , 31 },
	{ "June"     ,  6 , 30 },
	{ "July"     ,  7 , 31 },
	{ "August"   ,  8 , 31 },
	{ "September",  9 , 30 },
	{ "October"  , 10 , 31 },
	{ "November" , 11 , 30 },
	{ "December" , 12 , 31 },
};

int checkYunYear( int year );
int getMonthNum( char mmm[10] );
int getMonthDays( int year, int month );
int getDaysInYear( int year );
int getDaysPassed( int year, int month , int day );
int getTimeAsMinute( int days );

// =============================
// 메인 루틴
// =============================
int main( void )
{
	char mmm[10];
	int day, year, hour, minute;
	
	scanf( "%s %d, %d %d:%d", mmm, &day, &year, &hour, &minute );
	
	int month = getMonthNum( mmm );
	double minutePassed = getTimeAsMinute( getDaysPassed( year, month, day ) ) + (hour * 60) + minute;
	double minuteInYear = getTimeAsMinute( getDaysInYear( year ) );
	printf("%.10lf\n", minutePassed / minuteInYear * 100.0 );
	
	return EXIT_SUCCESS;
}

// =============================
// 윤년인지 아닌지 확인
//
// 인수값 : int 연도
// 리턴값 : 윤년이면 1, 윤년이 아니면 0
// =============================
int checkYunYear( int year )
{
	if( !(year % 400) || (!(year % 4) && (year % 100)) )
	{
		return TRUE;
	}
	return FALSE;
}

// =============================
// 영문월을 숫자월로 변환해서 반환
//
// 인수값 : char 영문월
// 리턴값 : 1 ~ 12의 숫자월, 일치하는 영문월이 없으면 0
// =============================
int getMonthNum( char mmm[10] )
{
	int i;
	for( i = 0; i < sizeof( monthList ) / sizeof( Month ); i++ )
	{
		if( strcmp( monthList[i].name, mmm ) == 0 )
		{ 
			return monthList[i].num;
		}
	}
	return FALSE;
}

// =============================
// 해당월의 일수를 반환
//
// 인수값 : int 연도, int 숫자월 
// 리턴값 : 숫자월에 해당하는 일수, 해당하는 숫자월이 없으면 0
// =============================
int getMonthDays( int year, int month )
{
	int i;
	for( i = 0; i < sizeof( monthList ) / sizeof( Month ); i++ )
	{
		if( monthList[i].num == month )
		{ 
			if( month == 2 && checkYunYear( year ) )
			{
				return monthList[i].days + 1;
			}
			return monthList[i].days;
		}
	}
	return FALSE;
}

// =============================
// 해당년도의 일수를 반환
//
// 인수값 : int 연도
// 리턴값 : 연도에 해당하는 일수
// =============================
int getDaysInYear( int year )
{
	int i;
	int ret = 0;
	for( i = 0; i < sizeof( monthList ) / sizeof( Month ); i++ )
	{
		ret += getMonthDays( year, monthList[i].num );
	}
	return ret;
}

// =============================
// 1월 1일부터 인수로 받은 일자 전일까지의 일수를 반환
//
// 인수값 : int 연도, int 숫자월, int 일자
// 리턴값 : 1월 1일부터 해당일자 전일까지의 일수
// =============================
int getDaysPassed( int year, int month, int day )
{
	int i;
	int ret = 0;
	for( i = 0; i < month-1; i++ )
	{
		ret += getMonthDays( year, monthList[i].num );
	}
	return ret + day-1;
}

// =============================
// 일수를 받아서 분으로 계산하여 반환
//
// 인수값 : int 일수
// 리턴값 : 일수를 분으로 변환한 값
// =============================
int getTimeAsMinute( int days )
{
	return days * 24 * 60;
}
