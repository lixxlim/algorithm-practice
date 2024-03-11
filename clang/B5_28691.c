//// https://www.acmicpc.net/problem/28691

#include <stdio.h>
#include <string.h>

typedef struct {
	char key[2];
	char value[7];
} KeyValue;

char* getValue(char* target, KeyValue* map, size_t size)
{
	while(size--)
	{
		if(strcmp(map[size].key, target) == 0) break;
	}
	if(size < 0) return NULL;
	return map[size].value;
}

int main(void)
{
	char target[2];
	scanf("%s", target);
	
	KeyValue map[5] = {
		{ "M", "MatKor" },
		{ "W", "WiCys" },
		{ "C", "CyKor" },
		{ "A", "AlKor" },
		{ "$", "$clear" },
	};
	
	char* result = getValue(target, map, sizeof(map)/sizeof(KeyValue));
	puts(result);
	return 0;
}
