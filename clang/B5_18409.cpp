// https://www.acmicpc.net/problem/18409

#include <stdio.h>

int checkStr(char *str, int n);

int main() {
	int n;
	scanf("%d", &n);
	
	char str[50];
	scanf("%s", str);
	
	int result = checkStr(str, n);
	printf("%d", result);
	
	return 0;
}

int checkStr(char *str, int n) {
	int count = 0;
	
	for(int i = 0; i < n; i++) {
		switch (str[i]) {
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
				count++;
				break;
			default:
				break;
		}
	}
	
	return count;
}
