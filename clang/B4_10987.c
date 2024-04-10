//// https://www.acmicpc.net/problem/10987

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[101];
	scanf("%s", str);
	
	int i, resp = 0, len = strlen(str);
	for(i = 0; i < len; i ++)
	{
		switch (str[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				resp++;
		}
	}
	printf("%d", resp);
	return 0;
}

