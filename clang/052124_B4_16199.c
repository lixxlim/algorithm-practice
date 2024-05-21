/*
 * https://www.acmicpc.net/problem/16199
 */
#include <stdio.h>

int checkMan(int bYear, int bMonth, int bDay, int tYear, int tMonth, int tDay)
{
	int age = tYear - bYear;
	if(age > 0)
	{
		if(bMonth > tMonth) age--;
		if(bMonth == tMonth)
		{
			if(bDay > tDay) age--;
		}
	}
	return age;
}

int checkSenun(int bYear, int bMonth, int bDay, int tYear, int tMonth, int tDay)
{
	return tYear - bYear + 1;
}

int checkYun(int bYear, int bMonth, int bDay, int tYear, int tMonth, int tDay)
{
	return tYear - bYear;
}

int main(void)
{
	int bYear, bMonth, bDay, tYear, tMonth, tDay;
	scanf("%d %d %d\n%d %d %d", &bYear, &bMonth, &bDay, &tYear, &tMonth, &tDay);

	int man, senun, yun;
	man = checkMan(bYear, bMonth, bDay, tYear, tMonth, tDay);
	senun = checkSenun(bYear, bMonth, bDay, tYear, tMonth, tDay);
	yun = checkYun(bYear, bMonth, bDay, tYear, tMonth, tDay);

	printf("%d\n%d\n%d\n", man, senun, yun);
	return 0;
}
