//// https://www.acmicpc.net/problem/27959

#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%s", n*100 >= m ? "Yes" : "No");
	return 0;
}
