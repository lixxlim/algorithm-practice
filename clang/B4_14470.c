// https://www.acmicpc.net/problem/14470

#include <stdio.h>

int main(void)
{
	int curTemp, tarTemp;
	int subZeroTime, zeroTime, superZeroTime;
	scanf("%d\n%d\n%d\n%d\n%d", &curTemp, &tarTemp, &subZeroTime, &zeroTime, &superZeroTime);
	
	int timeResult = 0;
	if(curTemp < 0)
	{
		timeResult += (curTemp * -1) * subZeroTime;
		curTemp = 0;
	}
	if(curTemp == 0)
	{
		timeResult += zeroTime;
	}
	timeResult += (tarTemp - curTemp) * superZeroTime;
	
	printf("%d", timeResult);
	return 0;
}
