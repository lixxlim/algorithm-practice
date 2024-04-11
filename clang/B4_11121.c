//// https://www.acmicpc.net/problem/11121

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		char a[120], b[120];
		scanf("%s %s", a, b);
		puts(strcmp(a,b) ? "ERROR" : "OK");
	}
	return 0;
}
