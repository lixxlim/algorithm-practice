//// https://www.acmicpc.net/problem/5596

#include <stdio.h>

int main(void)
{
	int dehan, minkuk = 0, manse = 0, i;
	
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &dehan);
		minkuk += dehan;
	}
	
	for(i = 0; i < 4; i++)
	{
		scanf("%d", &dehan);
		manse += dehan;
	}
	
	printf("%d", minkuk >= manse ? minkuk : manse);
	return 0;
}
