// https://www.acmicpc.net/problem/27294

#include <stdio.h>

int main() {
	int time, sake;
	scanf("%d %d", &time, &sake);
	printf("%d", time > 11 && time < 17 && sake == 0 ? 320 : 280);
	return 0;
}
