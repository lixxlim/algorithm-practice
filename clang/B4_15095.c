//// https://www.acmicpc.net/problem/15059
#include <stdio.h>

int main(void)
{
	int CBPa[3], CBPr[3], i;
	for (i = 0; i < 3; i++) { scanf("%d", &CBPa[i]); }
	for (i = 0; i < 3; i++) { scanf("%d", &CBPr[i]); }

	int result = 0;
	for (i = 0; i < 3; i++)
	{
		if (CBPa[i] < CBPr[i]) result += CBPr[i] - CBPa[i];
	}
	printf("%d\n", result);

	return 0;
}
