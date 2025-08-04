# https://www.acmicpc.net/problem/2667

import sys
from collections import deque

def get_input():
    return sys.stdin.readline().strip()

def bfs(graph, N, i, j, visited):
    if graph[i][j] == 0 or (i, j) in visited:
        return 0

    ret = 1
    visited.add((i, j))
    que = deque([(i, j)])
    while que:
        cur_x, cur_y = que.popleft()
        for dir_x, dir_y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nxt_x, nxt_y = cur_x + dir_x, cur_y + dir_y
            if nxt_x >= 0 and nxt_x < N and nxt_y >= 0 and nxt_y < N and graph[nxt_x][nxt_y] > 0:
                if (nxt_x, nxt_y) not in visited:
                    visited.add((nxt_x, nxt_y))
                    que.append((nxt_x, nxt_y))
                    ret += 1
    return ret

if __name__ == "__main__":
    N = int(get_input())
    graph = [ list(map(int, list(get_input()))) for _ in range(N) ]
    result = []

    visited = set()
    for i in range(N):
        for j in range(N):
            danji = bfs(graph, N, i, j, visited)
            if danji > 0:
                result.append(danji)

    print(len(result))
    for r in sorted(result):
        print(r)

