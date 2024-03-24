//// https://www.acmicpc.net/problem/30224

#include <stdio.h>

int hasNumSeven(int num)
{
	int chk = 0;
	while(num)
	{
		if (num % 10 == 7)
		{
			chk = 2;
			break;
		}
		num /= 10;
	}
	return chk;
}

int main(void)
{
	int num;
	scanf("%d", &num);
	printf("%d", hasNumSeven(num) | (num % 7 == 0));
	return 0;
}
