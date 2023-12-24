// https://www.acmicpc.net/problem/24883

#include <stdio.h>

int main() {
	char input;
	scanf("%c", &input);
	printf("%s\n", (input == 'n' || input == 'N') ? "Naver D2":"Naver Whale");
	return 0;
}
