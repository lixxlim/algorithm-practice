//// https://www.acmicpc.net/problem/5575

#include <stdio.h>

int main(void)
{
	int time[3][9], i, j, carry;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 6; j++)
		{
			scanf("%d", &time[i][j]);
		}
		
		// second
		if (time[i][5] >= time[i][2])
		{
			time[i][8] = (time[i][5] - time[i][2]);
			carry = 0;
		}
		else
		{
			time[i][8] = 60 + (time[i][5] - time[i][2]);
			carry = 1;
		}
		
		// minute
		if (time[i][4] - carry >= time[i][1])
		{
			time[i][7] = time[i][4] - carry - time[i][1];
			carry = 0;
		}
		else
		{
			time[i][7] = 60 + time[i][4] - carry - time[i][1];
			carry = 1;
		}
		
		// hour
		time[i][6] = time[i][3] - carry - time[i][0];
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d %d %d\n", time[i][6], time[i][7], time[i][8]);
	}
	
	return 0;
}
