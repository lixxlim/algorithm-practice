/*
 * https://www.acmicpc.net/problem/11283
 */
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
        setlocale(LC_ALL, "");

        wchar_t c;
        wscanf(L"%lc", &c);
        printf("%d\n", c - L'가' + 1);

        return 0;
}
