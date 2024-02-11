//// https://www.acmicpc.net/problem/6841

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[10];
	scanf("%s", str);
	while(strcmp(str, "TTYL"))
	{
		if(strcmp(str, "CU") == 0) puts("see you");
		else if(strcmp(str, ":-)") == 0) puts("I¡¯m happy");
		else if(strcmp(str, ":-(") == 0) puts("I¡¯m unhappy");
		else if(strcmp(str, ";-)") == 0) puts("wink");
		else if(strcmp(str, ":-P") == 0) puts("stick out my tongue");
		else if(strcmp(str, "(~.~)") == 0) puts("sleepy");
		else if(strcmp(str, "TA") == 0) puts("totally awesome");
		else if(strcmp(str, "CCC") == 0) puts("Canadian Computing Competition");
		else if(strcmp(str, "CUZ") == 0) puts("because");
		else if(strcmp(str, "TY") == 0) puts("thank-you");
		else if(strcmp(str, "YW") == 0) puts("you¡¯re welcome");
		else { puts(str); }
		scanf("%s", str);
	}
	puts("talk to you later");
	return 0;
}
