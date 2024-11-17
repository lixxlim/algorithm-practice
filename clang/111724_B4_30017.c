/**
 * https://www.acmicpc.net/problem/30017
 */
#include <stdio.h>
#include <stdlib.h>

#define MIN(x, y) (x) < (y) ? (x) : (y)

int main(void) {
	int a;
	int b;
	int ret;
	
	scanf("%d %d", &a, &b);
	ret = a > b ? b * 2 + 1 : a * 2 - 1 ;
	
	printf("%d\n", ret);
	
	return EXIT_SUCCESS;
}
