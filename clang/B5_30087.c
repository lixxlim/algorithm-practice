//// https://www.acmicpc.net/problem/30087

#include <stdio.h>
#include <string.h>

typedef char String[1024];
typedef struct {
	String key;
	String val;
} KeyValue;

char* getRoomNo(char* target, KeyValue* map, size_t size)
{
	while(size--)
	{
		if(strcmp(target, map[size].key) == 0) break;
	}
	if(size < 0) return target;
	return map[size].val;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	
	KeyValue RoomMap[7] = {
		{ "Algorithm", "204" },
		{ "DataAnalysis", "207" },
		{ "ArtificialIntelligence", "302" },
		{ "CyberSecurity", "B101" },
		{ "Network", "303" },
		{ "Startup", "501" },
		{ "TestStrategy", "105" },
	};
	
	while(n--)
	{
		String str;
		scanf("%s", str);
		printf("%s\n", getRoomNo(str, RoomMap, sizeof(RoomMap)/sizeof(KeyValue)));
	}
	return 0;
}
