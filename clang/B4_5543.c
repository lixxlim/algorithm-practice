//// https://www.acmicpc.net/problem/5543

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void)
{
	int b1, b2, b3, coke, sprite;
	scanf("%d\n%d\n%d\n%d\n%d", &b1, &b2, &b3, &coke, &sprite);
	int berger = MIN(MIN(b1, b2), b3);
	int drink = MIN(coke, sprite);
	int set = berger + drink - 50;
	printf("%d", set);
	return 0;
}
