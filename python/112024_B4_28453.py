# https://www.acmicpc.net/problem/28453

def leveling(level):
    if level == 300:
        return 1
    elif level >= 275:
        return 2
    elif level >= 250:
        return 3
    else:
        return 4

n = int(input())
levels = list(map(int, input().split()))
[print(leveling(x), end=" ") for x in levels]
    
