//// https://www.acmicpc.net/problem/29699

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if(n == 0) return 1;

	char str[16] = "CWelcomeToSMUPC";
	printf("%c", str[n%14]);
	return 0;
}
