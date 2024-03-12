//// https://www.acmicpc.net/problem/28701

#include <stdio.h>

long long myPow(int n, int p) {
	long long result = n;
	int i;
	for(i = 1; i < p; i++)
	{
		result *= n;
	}
	return result;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	long long sum = 0, sumpow = 0, powsum = 0;
	while(n)
	{
		powsum += myPow(n, 3);
		sum += n--;
	}
	sumpow = myPow(sum, 2);
	
	printf("%lld\n%lld\n%lld\n", sum, sumpow, powsum);
	return 0;
}
