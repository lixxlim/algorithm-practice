// https://www.acmicpc.net/problem/27889

#include <stdio.h>
#include <string.h>

int main() {
	char str[10], result[100];
	scanf("%s", str);
	
	if (strcmp(str, "NLCS") == 0) { strcpy(result, "North London Collegiate School"); } 
	if (strcmp(str, "BHA" ) == 0) { strcpy(result, "Branksome Hall Asia"); } 
	if (strcmp(str, "KIS" ) == 0) { strcpy(result, "Korea International School"); } 
	if (strcmp(str, "SJA" ) == 0) { strcpy(result, "St. Johnsbury Academy"); } 

	printf(result);
	return 0;
}
