//// https://www.acmicpc.net/problem/28938

#include <stdio.h>

int main(void)
{
    int n, in, sum = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &in);
        sum += in;
    }
    puts(sum > 0 ? "Right" : sum < 0 ? "Left" : "Stay");
    return 0;
}