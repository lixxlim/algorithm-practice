//// https://www.acmicpc.net/problem/4562

//#include <stdio.h>
//
//int main(void)
//{
//	int n, i;
//	scanf("%d", &n);
//	for(i = 0; i < n; i++)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%s\n", a >= b ? "MMM BRAINS" : "NO BRAINS");
//	}
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* buffer;
    size_t length;
    size_t capacity;
} StringBuilder;

StringBuilder* newStringBuilder() {
    StringBuilder* sb = malloc(sizeof(StringBuilder));
    sb->length = 0;
    sb->capacity = 16;
    sb->buffer = malloc(sb->capacity);
    sb->buffer[0] = '\0';
    return sb;
}

void append(StringBuilder* sb, const char* str) {
    size_t strLength = strlen(str);
    while (sb->length + strLength + 1 > sb->capacity) {
        sb->capacity *= 2;
        sb->buffer = realloc(sb->buffer, sb->capacity);
    }
    strcpy(sb->buffer + sb->length, str);
    sb->length += strLength;
}

void print(StringBuilder* sb) {
    printf("%s\n", sb->buffer);
}

void deleteStringBuilder(StringBuilder* sb) {
    free(sb->buffer);
    free(sb);
}

int main() {
    StringBuilder* sb = newStringBuilder();
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
    	int a, b;
    	scanf("%d %d", &a, &b);
    	append(sb, a >= b ? "MMM BRAINS\n" : "NO BRAINS\n");
	}
    print(sb);
    deleteStringBuilder(sb);
    return 0;
}
