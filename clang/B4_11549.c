// https://www.acmicpc.net/problem/11549

#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

#define TASTER 5

int main(void)
{
	int t, ans = 0;
	scanf("%d", &t);
	
	int i;
	for (i = 0; i < TASTER; i++)
	{
		int inp;
		scanf("%d", &inp);
		ans += ((inp == t) ? 1 : 0);
	}
	printf("%d", ans);
	return 0;
}
