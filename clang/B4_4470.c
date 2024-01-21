//// https://www.acmicpc.net/problem/4470

#include <stdio.h>

int main(void)
{
	int n, i;
	char str[1000];
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		fgets(str, sizeof(str), stdin);
        printf("%d. %s", i+1, str);
	}
	return 0;
}
