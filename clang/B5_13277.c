//// https://www.acmicpc.net/problem/13277
#define MAX_SIZE 300000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseStr(char* str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len/2; i++)
	{
		char temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - i - 1] = temp;
	}
}

int main(void) 
{
	// Get input as string
    char strA[MAX_SIZE + 1] = {0};
    char strB[MAX_SIZE + 1] = {0};
    scanf("%s %s", strA, strB);
    
    // Check length
    int lenA = strlen(strA);
    int lenB = strlen(strB);
    int targetLen = lenA > lenB ? lenA : lenB;
    
    // Reverse string
    reverseStr(strA);
    reverseStr(strB);

    // Padding 0 to target length
    memset(strA + lenA, '0', targetLen - lenA);
    memset(strB + lenB, '0', targetLen - lenB);
    strA[targetLen] = '\0';
    strB[targetLen] = '\0';

	// Prepare string for result
	char strResult[targetLen * 2];
	memset(strResult, '0', targetLen * 2);
	strResult[targetLen * 2] = '\0';

	// Multiply
	int i, j;
	for (i = 0; i < targetLen; i++)
	{
		for (j = 0; j < targetLen; j++)
		{
			int current = strResult[i + j] - '0';
			int multiply = (strA[i] - '0') * (strB[j] - '0');
			int sum = current + multiply;
			strResult[i + j] = sum % 10 + '0';
			strResult[i + j + 1] += sum / 10;
		}
	}
	
	// Reverse back
	reverseStr(strResult);
	
	// Remove zero padding and print
	char* p = strResult;
	while (*p == '0') p++;
    printf("%s\n", *p ? p : "0");
}
