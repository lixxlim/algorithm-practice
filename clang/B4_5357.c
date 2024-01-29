//// https://www.acmicpc.net/problem/5357

#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	while(n--)
	{
		char str[101], temp;
		scanf("%s", str);
		temp = str[0];
		printf("%c", str[0]);
		for(i = 1; i < strlen(str); i++)
		{
			if (temp == str[i])
			{
				continue;
			}
			printf("%c", str[i]);
			temp = str[i];
		}
		puts("");
	}
}
