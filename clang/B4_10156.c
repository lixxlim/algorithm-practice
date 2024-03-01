//// https://www.acmicpc.net/problem/10156

#include <stdio.h>

int main(void)
{
	int K, N, M;
	scanf("%d %d %d", &K, &N, &M);
	int need = (K * N) - M;
	printf("%d", need > 0 ? need : 0);
	return 0;
}
