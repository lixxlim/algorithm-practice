// https://www.acmicpc.net/problem/15680
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int input;
    scanf("%d", &input);
    
    bool check;
    check = (input == 1);
    
    char str[100];
    strcpy(str, check ? "Leading the Way to the Future":"YONSEI");
    
    printf("%s",str);
}