/** 
 * https://www.acmicpc.net/problem/11282
 */
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
	unsigned int c;
	scanf("%d", &c);

	setlocale(LC_ALL, "");
	wchar_t wchar = c + (int)L'가'-1;
	wprintf(L"%lc\n", wchar);
	return 0;
}
