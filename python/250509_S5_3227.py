# https://www.acmicpc.net/problem/3227
def is_even(num):
    return num % 2 == 0

def judge_left(color, g, maps):
    if 1 >= g: return
    do = False
    cnt = 0
    for i in range(g-1, -1, -1):
        if maps[i] == (color * -1):
            cnt += 1
        else:
            if maps[i] == color and cnt > 0:
                do = True
            break
    if do:
        for i in range(g-1, -1, -1):
            if maps[i] == color:
                break
            maps[i] = 0

def judge_right(even, g, maps):
    if len(maps) -2 <= g: return
    do = False
    cnt = 0
    for i in range(g+1, len(maps)):
        if maps[i] == (color * -1):
            cnt += 1
        else:
            if maps[i] == color and cnt > 0:
                do = True
            break
    if do:
        for i in range(g+1, len(maps)):
            if maps[i] == color:
                break
            maps[i] = 0


if __name__ == "__main__":
    n, p = map(int, input().split())
    maps = [0] * n
    for i in range(p):
        g = int(input()) - 1
        color = 1 if is_even(i) else -1
        judge_left(color, g, maps)
        judge_right(color, g, maps)
        maps[g] = color
    print(maps.count(1), maps.count(-1))
