//// https://www.acmicpc.net/problem/27434
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000000

// 문자열에 숫자를 곱하는 함수
void multiply(char *num, int n) {
    int carry = 0;
    int len = strlen(num);
    int i;
    for (i = len - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        int product = digit * n + carry;
        num[i] = (product % 10) + '0';
        carry = product / 10;
    }
    while (carry) {
        len++;
        num[len - 1] = (carry % 10) + '0';
        carry /= 10;
    }
}

// 팩토리얼을 계산하는 함수
void factorial(int n) {
    char *result = (char *)malloc(MAX_LENGTH * sizeof(char));
    if (result == NULL) {
        printf("메모리 할당에 실패했습니다.");
        exit(1);
    }
    strcpy(result, "1");

	int i;
    for (i = 2; i <= n; i++) {
        multiply(result, i);
    }

    printf("%s\n", result);
    free(result);
}

int main() {
    int N;

    // 입력 받기
    printf("정수 N을 입력하세요: ");
    scanf("%d", &N);

    // 팩토리얼 계산 및 출력
    factorial(N);

    return 0;
}

