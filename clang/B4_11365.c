//// https://www.acmicpc.net/problem/11365

#include <stdio.h>
#include <string.h>

typedef char string[1024];

void reverseStr(string str)
{
	if(str[strlen(str)-1] == '\n') str[strlen(str)-1] = '\0';
	int i, len = strlen(str);
	if (len < 2) return;
	for (i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
	}
}

int main(void)
{
	while(1)
	{
		string inp;
		fgets(inp, sizeof(inp), stdin);
		if (strcmp(inp, "END\n") == 0) break;
		reverseStr(inp);
		puts(inp);
	}
	return 0;
}
