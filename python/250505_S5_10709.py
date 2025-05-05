# https://www.acmicpc.net/problem/10709
h, w = map(int, input().split())
cloud_map = [list(input()) for _ in range(h)]
mirai_map = [[-1] * w for _ in range(h)]
for r in range(h):
    for c in range(w):
        if cloud_map[r][c] == 'c':
            mirai_map[r][c] = 0
        elif c > 0 and cloud_map[r][c] == '.' and mirai_map[r][c-1] >= 0:
            mirai_map[r][c] = mirai_map[r][c-1] + 1
[ print(" ".join(map(str, mirai))) for mirai in mirai_map ]
