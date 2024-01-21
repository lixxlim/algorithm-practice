//// https://www.acmicpc.net/problem/4299

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* check(int sum, int diff);

int main(void)
{
	int x, y, sum, diff;
	scanf("%d %d", &sum, &diff);
	printf("%s", check(sum, diff));
	return 0;
}

char* check(int sum, int diff)
{
	static char result[10];
	int x = (sum + diff) / 2;
	int y = (sum - diff) / 2;
	if (x < 0 || y < 0 || x + y != sum || x - y != diff)
	{
		sprintf_s(result, sizeof(result), "%d", -1);
	}
	else
	{
		sprintf_s(result, sizeof(result), "%d %d", x, y);
	}
	return result;
}
