/*
 * https://www.acmicpc.net/problem/15873
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char ab[4];
	scanf("%s", ab);
	if(strlen(ab) == 4.0) { printf("%d\n", 20); }
	if(strlen(ab) == 3.0) { printf("%d\n", (ab[0] == '1' && ab[1] == '0') ? atoi(&ab[2]) + 10 : atoi(&ab[0])/100 + 10); }
	if(strlen(ab) == 2.0) { printf("%d\n", atoi(&ab[0])/10 + atoi(&ab[1])); }
	
	return 0;
}
