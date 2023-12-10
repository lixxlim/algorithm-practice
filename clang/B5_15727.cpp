#include <stdio.h>

int main() {
	int dist;
	scanf("%d", &dist);
	int plus = 0;
	if(dist % 5 != 0) plus = 1;
	printf("%d", (dist / 5) + plus);
	return 0;
}
