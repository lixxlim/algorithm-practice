/*
 * https://www.acmicpc.net/problem/20233
 */
#include <stdio.h>

int main( void )
{
	int monthX, minuteX, monthY, minuteY, T;
	scanf("%d\n%d\n%d\n%d\n%d", &monthX, &minuteX, &monthY, &minuteY, &T);
	printf("%d %d\n", 
		T > 30 ? 21 * (T - 30) * minuteX + monthX : monthX,
		T > 45 ? 21 * (T - 45) * minuteY + monthY : monthY
	);
	return 0;
}
