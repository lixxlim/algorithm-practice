//// https://www.acmicpc.net/problem/31429

#include <stdio.h>

typedef char string[1024];

typedef struct {
	string teamName;
	int solved;
	int penalty;
} Score;

Score scoreboard[] = {
	{ "Redshift", 12, 1600 },
	{ "SCC_Shinchon Coding Champions", 11, 894 },
	{ "월파출신 코치가 가르치고 있어요", 11, 1327 },
	{ "가오당", 10, 1311 },
	{ "1등하러왔습니다", 9, 1004 },
	{ "병공병", 9, 1178 },
	{ "조성훈", 9, 1357 },
	{ "기령손의 그녀들", 8, 837 },
	{ "Woojeans", 7, 1055 },
	{ "홍하예프", 6, 556 },
	{ "상금 도둑", 6, 773 },
};

int main(void)
{
	int n;
	scanf("%d", &n);
	Score* score = &scoreboard[n-1];
	printf("%d %d", score->solved, score->penalty);
	return 0;
}
