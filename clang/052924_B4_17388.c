/*
 * https://www.acmicpc.net/problem/17388
 */
#include <stdio.h>

char S[9] = "Soongsil\0";
char K[6] = "Korea\0";
char H[8] = "Hanyang\0";

char* skh(int s, int k, int h)
{
	int sum = s + k + h;
	if (sum >= 100) return "OK";
	if (s < k && s < h) return S;
	if (k < s && k < h) return K;
	if (h < s && h < k) return H;
}

int main(void)
{
	int s, k, h;
	scanf("%d %d %d", &s, &k, &h);
	puts(skh(s, k, h));
	return 0;
}
