//// https://www.acmicpc.net/problem/6825

#include <stdio.h>

int main(void)
{
	float weight, height;
	scanf("%f\n%f", &weight, &height);
	float BMI = weight / (height * height);
	printf("%f\n", BMI);
	if(BMI > 25.0)
	{
		puts("Overweight");
	}
	else if (BMI >= 18.5)
	{
		puts("Normal weight");
	}
	else
	{
		puts("Underweight");
	}
	return 0;
}
