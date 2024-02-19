//// https://www.acmicpc.net/problem/8760

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	while(n--) {
		int w, k;
		scanf("%d %d", &w, &k);
		printf("%d\n", w*k/2);
	}
	return 0;
}
