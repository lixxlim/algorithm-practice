//// https://www.acmicpc.net/problem/9772

#include <stdio.h>

int main() 
{
	double x, y;

	while(1)
	{
		scanf("%lf %lf", &x, &y);

		if(x * y == 0) printf("%s\n", "AXIS");
		else if(x > 0) printf("%s\n", y > 0 ? "Q1" : "Q4");
		else if(x < 0) printf("%s\n", y > 0 ? "Q2" : "Q3");
		
		if(x == 0 && y == 0) break;
	}
	
	return 0;
}
