// https://www.acmicpc.net/problem/15740

#include <stdio.h>

void reverse(char arr[]) 
{
    int len = strlen(arr);
    
	int i = 0;
    for (i = 0; i < len / 2; i++) 
	{
        char temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
}

void bigIntAdd(char arrA[], char arrB[], char arrResult[]) {
    int carry = 0;
    int lenA = strlen(arrA);
    int lenB = strlen(arrB);
    int len = lenA > lenB ? lenA : lenB;

    int i = 0;
    for (i = 0; i < len; i++)
	{
        int digitA = (i < lenA) ? arrA[i] - '0' : 0;
        int digitB = (i < lenB) ? arrB[i] - '0' : 0;

        int sum = digitA + digitB + carry;
        carry = sum / 10;
        arrResult[i] = (sum % 10) + '0';
    }

    if (carry == 1)
	{
        arrResult[len] = '1';
        len++;
    }

    arrResult[len] = '\0';
}

void bigIntMinus(char arrA[], char arrB[], char arrResult[])
{
    int carry = 0;
    int lenA = strlen(arrA);
    int lenB = strlen(arrB);
    int len = lenA > lenB ? lenA : lenB;

    int i = 0;
    for (i = 0; i < len; i++)
	{
        int digitA = (i < lenA) ? arrA[i] - '0' : 0;
        int digitB = (i < lenB) ? arrB[i] - '0' : 0;

        int sum = digitA - digitB - carry;
        carry = (sum < 0) ? 1 : 0;
        arrResult[i] = ((sum + 10) % 10) + '0';
    }

    if (carry == 1)
	{
        arrResult[len] = '1';
        len++;
    }

    arrResult[len] = '\0';	
}

int main() {
	char str[10003]
	return 0;
}
