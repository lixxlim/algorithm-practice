// https://www.acmicpc.net/problem/26711

#include <stdio.h>
#include <string.h>

void reverse(char a[]) {
	int len = strlen(a);
	int i = 0;
	for(i; i < len/2; i++)
	{
		char temp = a[i];
		a[i] = a[(len-1) - i];
		a[(len-1) - i] = temp;
	}
}

void bigIntAdd(char a[], char b[], char sum[]) {
	reverse(a);
	reverse(b);
	
	int carry = 0;
	int lenA = strlen(a);
    int lenB = strlen(b);
	int len = lenA > lenB ? lenA : lenB;

	int i = 0;
	for(i; i < len; i++)
	{
		int digitA = (i < lenA) ? a[i] - '0' : 0;
        int digitB = (i < lenB) ? b[i] - '0' : 0;
        
		int result = digitA + digitB + carry;
		sum[i] = result % 10 + '0';
		carry = result / 10;
	}
	
	if(carry == 1)
	{
		sum[len] = '1';
		len++;
	}
	sum[len] = '\0';
	
	reverse(sum);
}

int main() {
	char a[5001], b[5001], sum[5002];
	scanf("%s\n %s", a, b);
	bigIntAdd(a, b, sum);
	printf("%s%n", sum);
	return 0;
}
