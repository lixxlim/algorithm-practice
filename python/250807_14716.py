# https://www.acmicpc.net/problem/14716
import sys
from collections import deque

def get_input():
    return map(int, sys.stdin.readline().strip().split())

def bfs(graph, M, N, i, j):
    if graph[i][j] != 1:
        return 0
    que = deque([(i, j)])
    while que:
        cur_x, cur_y = que.popleft()
        for dir_x, dir_y in [ (-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1) ]:
            nxt_x, nxt_y = cur_x + dir_x, cur_y + dir_y
            if nxt_x >=0 and nxt_x < M and nxt_y >= 0 and nxt_y < N:
                if graph[nxt_x][nxt_y] == 1:
                    graph[nxt_x][nxt_y] = 2
                    que.append((nxt_x, nxt_y))
    return 1

M, N = get_input()
graph = [ list(get_input()) for _ in range(M) ]
result = sum([ bfs(graph, M, N, i, j) for j in range(N) for i in range(M) ])
print(result)
            
