/*
 * https://www.acmicpc.net/problem/17863
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
	char cmp[8] = "5550000\0";
	char number[8];
	scanf("%s", number);
	puts(strncmp(cmp, number, 3) ? "NO" : "YES");
	return 0;
}
