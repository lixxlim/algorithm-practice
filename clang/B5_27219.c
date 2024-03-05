//// https://www.acmicpc.net/problem/27219

#include <stdio.h>
#include <string.h>

typedef char String[2001];

int main(void)
{
	int n;
	scanf("%d", &n);
	int V = n / 5;
	int I = n % 5;
	
	String str = "";
	int i, j;
	for (i = 0; i < V; i++)
	{
		strcpy(str + i, "V");
	}
	for (j = 0; j < I; j++)
	{
		strcpy(str + i + j, "I");
	}
	
	puts(str);
	return 0;
}
