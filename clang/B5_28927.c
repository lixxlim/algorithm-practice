//// https://www.acmicpc.net/problem/28927

#include <stdio.h>

int main(void)
{
    int max[3], mel[3];
    scanf("%d %d %d\n%d %d %d", &max[0], &max[1], &max[2], &mel[0], &mel[1], &mel[2]);

    int maxTotal = (max[0] * 3) + (max[1] * 20) + (max[2] * 120);
    int melTotal = (mel[0] * 3) + (mel[1] * 20) + (mel[2] * 120);
    char winner[5] = "Draw";
    if(maxTotal != melTotal)
    {
        winner[0] = 'M';
        winner[1] = (maxTotal > melTotal) ? 'a' : 'e';
        winner[2] = (maxTotal > melTotal) ? 'x' : 'l';
        winner[3] = '\0';
    }

    puts(winner);
    return 0;
}