//// https://www.acmicpc.net/problem/11257
#include <stdio.h>

#define STRATEGY___RATE 35
#define MANAGEMENT_RATE 25
#define TECHNOLOGY_RATE 40
#define PASS_RATE 0.3
#define PASS_POINT 55

int checkPass(int sum, int s, int m, int t)
{
	if (sum < PASS_POINT) return 0;
	if (s < STRATEGY___RATE * PASS_RATE) return 0;
	if (m < MANAGEMENT_RATE * PASS_RATE) return 0;
	if (t < TECHNOLOGY_RATE * PASS_RATE) return 0;
	return 1;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int no, s, m, t;
		scanf("%d %d %d %d", &no, &s, &m, &t);
		int sum = s + m + t;
		printf("%d %d %s\n", no, sum, checkPass(sum, s, m, t) ? "PASS":"FAIL");
	}
	return 0;
}
