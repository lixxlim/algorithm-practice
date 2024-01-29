//// https://www.acmicpc.net/problem/5524

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		char str[21];
		fgets(str, sizeof(str), stdin);
		int len = strlen(str);
		if (str[len-1] == '\n')
		{
			str[len-1] = '\0';
			len--;
		}
		for (i = 0; i < len; i++)
		{
			str[i] = tolower(str[i]);
		}
		puts(str);
	}
	return 0;
}
