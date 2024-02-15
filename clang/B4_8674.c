//// https://www.acmicpc.net/problem/8674

#include <stdio.h>

int main()
{
    long long a[2];
    scanf("%lld %lld", &a[0], &a[1]);
    
    if(!(a[0] % 2) || !(a[1] % 2)) printf("0");
    else printf("%lld", a[0] < a[1] ? a[0] : a[1]);
    
    return 0;
}
