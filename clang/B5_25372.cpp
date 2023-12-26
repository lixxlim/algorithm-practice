// https://www.acmicpc.net/problem/25372

#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		char pass[1001];
		scanf("%s", pass);
		printf("%s\n", strlen(pass) > 5 && strlen(pass) < 10 ? "yes" : "no");
	}
	return 0;	
}
