//// https://www.acmicpc.net/problem/14038
#include <stdio.h>

int main(void)
{
	char i, sum = 0;
	for (i = 0; i < 6; i++) 
	{ 
		char c;
		scanf("%c", &c); 
		getchar();
		if ((int)c == 'W') { sum += 1; }
	}

	switch (sum)
	{
		case 6:
		case 5:
			puts("1");
			break;
		case 4:
		case 3:
			puts("2");
			break;
		case 2:
		case 1:
			puts("3");
			break;
		default:
			puts("-1");
	}
	return 0;
}
