//// https://www.acmicpc.net/problem/6763

#include <stdio.h>

int main(void)
{
	int limit, speed, fine;
	scanf("%d\n%d", &limit, &speed);
	int diff = speed - limit;
	if(diff > 30)
	{
		fine = 500;
	}
	else if(diff > 20)
	{
		fine = 270;
	}
	else if(diff > 0)
	{
		fine = 100;
	}
	else
	{
		puts("Congratulations, you are within the speed limit!");
		return 0;
	}
	
	printf("You are speeding and your fine is $%d.", fine);
	return 0;
}
