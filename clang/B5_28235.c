//// https://www.acmicpc.net/problem/28235

#include <stdio.h>
#include <string.h>

typedef struct {
	char key[1024];
	char value[1024];
} keyValuePair;

char* getValue(char* targetKey, keyValuePair* map, int size) 
{
	while(size--)
	{
		if(strcmp(map[size].key, targetKey) == 0) break;
	}
	if(size < 0) return NULL;
	return map[size].value;
}

int main(void)
{
	char iSay[1024];
	scanf("%s", iSay);

	keyValuePair map[4] = {
		{ "SONGDO", "HIGHSCHOOL" },
		{ "CODE", "MASTER" },
		{ "2023", "0611" },
		{ "ALGORITHM", "CONTEST" },
	};
	
	char* youSay = getValue(iSay, map, sizeof(map)/sizeof(keyValuePair));
	printf("%s", youSay);
	return 0;
}
