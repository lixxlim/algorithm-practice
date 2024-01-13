// https://www.acmicpc.net/problem/13277

#include <stdio.h>
#include <string.h>

void reverse(char a[]) {
	int len = strlen(a);
	int i = 0;
	for (i; i < len/2; i++)
	{
		char temp = a[i];
		a[i] = a[len-1-i];
		a[len-1-i] = temp;
	}
}

int main() {
	return 0;
}
