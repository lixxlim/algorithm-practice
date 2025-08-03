# https://www.acmicpc.net/problem/2178
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

def bfs(n, m, miro):
    visited = set([(0, 0)])
    que = deque([(0, 0)])
    while que:
        cur_x, cur_y = que.popleft()
        if cur_x == n and cur_y == m:
            return miro[cur_x][cur_y]
        for dir_x, dir_y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nxt_x, nxt_y = cur_x + dir_x, cur_y + dir_y
            if nxt_x >= 0 and nxt_x <= n and nxt_y >= 0 and nxt_y <= m:
                if (nxt_x, nxt_y) not in visited and miro[nxt_x][nxt_y] > 0:
                    visited.add((nxt_x, nxt_y))
                    que.append((nxt_x, nxt_y))
                    miro[nxt_x][nxt_y] += miro[cur_x][cur_y]
    return -1

N, M = map(int, get_input().split())
miro = [ list(map(int, list(get_input()))) for _ in range(N) ]

res = bfs(N - 1, M - 1, miro)
print(res)

