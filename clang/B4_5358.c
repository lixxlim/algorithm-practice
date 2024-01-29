//// https://www.acmicpc.net/problem/5358

#include <stdio.h>

int main(void)
{
	char c;
	while((c = getchar()) != EOF)
	{
		switch(c)
		{
			case 'e':
				putchar('i');
				break;
			case 'i':
				putchar('e');
				break;
			case 'E':
				putchar('I');
				break;
			case 'I':
				putchar('E');
				break;
			default:
				putchar(c);
		}
	}
	return 0;
}
