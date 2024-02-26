//// https://www.acmicpc.net/problem/10101

#include <stdio.h>

int sumArray(int* arr, int size);

int main(void)
{
	int i, tri[3];
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &tri[i]);
	}
	
	int sum = sumArray(tri, (sizeof(tri) / sizeof(int)));
	if (tri[0] == 60 && tri[1] == 60 && tri[2] == 60)
	{
		puts("Equilateral");
	}
	else if (sum == 180)
	{
		if (tri[0] == tri[1] || tri[1] == tri[2] || tri[0] == tri[2])
		{
			puts("Isosceles");
		}
		else
		{
			puts("Scalene");
		}
	}
	else
	{
		puts("Error");
	}
	
	return 0;
}

int sumArray(int* arr, int size)
{
	int i, result = 0;
	for (i = 0; i < size; i++)
	{
		result += arr[i];
	}
	return result;
}
