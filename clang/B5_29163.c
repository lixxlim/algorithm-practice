//// https://www.acmicpc.net/problem/29163

#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int num, chk = 0;
	while(n--)
	{
		scanf("%d", &num);
		if(num&1) chk--; else chk++;
	}
	puts(chk > 0 ? "Happy" : "Sad");
	return 0;
}
