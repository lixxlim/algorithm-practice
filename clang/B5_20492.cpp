// https://www.acmicpc.net/problem/20492

#include <stdio.h>

int main() {
	int money;
	scanf("%d", &money);
	
	int a = money *0.78;
	int b = money - (money *0.2 *0.22);
	printf("%d %d", a, b);
	return 0;
}
