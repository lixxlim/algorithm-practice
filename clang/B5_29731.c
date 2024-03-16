//// https://www.acmicpc.net/problem/29731

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char Word[40];

bool exists(Word* words, char* term)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        if (strcmp(term, words[i]) == 0) return true;
    }
    return false;
}

int main(void)
{
	int n;
	scanf("%d", &n);
    getchar();
	
	Word words[] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop",
    };

    bool isHacked = false;
    while(n--)
    {
        char term[40];
        fgets(term, sizeof(term), stdin);
        term[strcspn(term, "\n")] = '\0';
        if (!exists(words, term))
        {
            isHacked = true;
            break;
        }
    }
    printf("%s\n", isHacked ? "Yes" : "No");
    return 0;
}
