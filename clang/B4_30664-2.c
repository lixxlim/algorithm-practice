//// https://www.acmicpc.net/problem/30664

#include <stdio.h>
#include <string.h>

int main() 
{
    char lotto_str[31];
    while (1) 
    {
        scanf("%s", lotto_str);
        if (strcmp(lotto_str, "0") == 0) break;
        
        int length = strlen(lotto_str);
        int i, result = 0;
        for (i = 0; i < length; i++) { result = (result * 10 + (lotto_str[i] - '0')) % 42; }
        
        puts(result ? "TENTE NOVAMENTE" : "PREMIADO");
    }
    return 0;
}
