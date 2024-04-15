//// https://www.acmicpc.net/problem/11945

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char* str)
{
	int i, size = strlen(str);
	for (i = 0; i < size/2; i++)
	{
		char temp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = temp;
	}
}

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	char *fishBread = (char*)malloc((m + 1) * sizeof(char));
	fishBread[m] = '\0';
	while(n--)
	{
		scanf("%s", fishBread);
		reverse(fishBread);
		puts(fishBread);
	}
	free(fishBread);
	return 0;
}
