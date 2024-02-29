//// https://www.acmicpc.net/problem/26489

#include <stdio.h>

int main(void)
{
	int cnt = 0;
	char c;
	while (1)
	{
		c=getchar();
		if (c == EOF)
		{
			break;
		}
		else if (c == '\n')
		{
			cnt++;
		}
    }
	printf("%d", cnt);
	return 0;
}
