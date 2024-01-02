// https://www.acmicpc.net/problem/26307

#include <stdio.h>

int main() {
	int hh, mm;
	scanf("%d %d", &hh, &mm);
	printf("%d", (hh-9)*60 + mm);
	return 0;
}
