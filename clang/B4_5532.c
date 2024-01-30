//// https://www.acmicpc.net/problem/5532

#include <stdio.h>
#include <math.h>

int main(void)
{
	int L, A, B, C, D;
	scanf("%d\n%d\n%d\n%d\n%d", &L, &A, &B, &C, &D);
	int homeworkDays = fmax((int)ceil((float)A / C), (int)ceil((float)B / D));
	printf("%d", L - homeworkDays);
	return 0;
}
