// https://www.acmicpc.net/problem/16170
#include <stdio.h>
#include <time.h>

int main() {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	printf("%d\n",tm.tm_year + 1900);
	printf("%02d\n",tm.tm_mon + 1);
	printf("%02d\n",tm.tm_mday);
	return 0;
}
