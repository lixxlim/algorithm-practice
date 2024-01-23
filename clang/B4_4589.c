//// https://www.acmicpc.net/problem/4589

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* buffer;
    size_t length;
    size_t capacity;
} StringBuilder;

StringBuilder* newStringBuilder();
void append(StringBuilder* sb, const char* str);
void print(StringBuilder* sb);
void deleteStringBuilder(StringBuilder* sb);

int main(void)
{
	int n;
	scanf("%d", &n);
	StringBuilder* sb = newStringBuilder();
	append(sb, "Gnomes:");
	while(n--)
	{
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		append(sb, (a > b && b > c) || (a < b && b < c) ? "\nOrdered" : "\nUnordered" );
	}
	print(sb);
	deleteStringBuilder(sb);
	return 0;
}


// StringBuilder >>>>>>>>>>>>>>>>>>>
StringBuilder* newStringBuilder() 
{
    StringBuilder* sb = malloc(sizeof(StringBuilder));
    sb->length = 0;
    sb->capacity = 16;
    sb->buffer = malloc(sb->capacity);
    sb->buffer[0] = '\0';
    return sb;
}

void append(StringBuilder* sb, const char* str) 
{
    size_t strLength = strlen(str);
    while (sb->length + strLength + 1 > sb->capacity) {
        sb->capacity *= 2;
        sb->buffer = realloc(sb->buffer, sb->capacity);
    }
    strcpy(sb->buffer + sb->length, str);
    sb->length += strLength;
}

void print(StringBuilder* sb) 
{
    printf("%s", sb->buffer);
}

void deleteStringBuilder(StringBuilder* sb) 
{
    free(sb->buffer);
    free(sb);
}
// StringBuilder <<<<<<<<<<<<<<<<<<<<
