# https://www.acmicpc.net/problem/11123
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

def bfs(h, w, grid, H, W):
    if grid[h][w] == '#':
        que = deque([(h, w)])
        grid[h][w] = '!'
        while que:
            cur = que.popleft()
            for x, y in [(-1, 0), (0, -1), (1, 0), (0, 1)]:
                new_x, new_y = cur[0] + x, cur[1] + y
                if new_x >= 0 and new_x < H and new_y >= 0 and new_y < W:
                    if grid[new_x][new_y] == '#':
                        que.append((new_x, new_y))
                        grid[new_x][new_y] = '!'
        return 1
    return 0

T = int(get_input())
result = []
for _ in range(T):
    H, W = map(int, get_input().split())
    grid = list([list(get_input()) for _ in range(H)])
    ret = 0
    for h in range(H):
        for w in range(W):
            ret += bfs(h, w, grid, H, W)
    result.append(ret)

for r in result:
    print(r)
