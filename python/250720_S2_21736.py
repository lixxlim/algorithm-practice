# https://www.acmicpc.net/problem/21736
import sys
from collections import defaultdict, deque

vec = [ (-1, 0), (0, -1), (1, 0), (0, 1) ]

def get_input():
    return sys.stdin.readline().strip()

def bfs(graph, I, N, M):
    cnt = 0
    visited = set([I])
    que = deque([I])
    while que:
        cur = que.popleft()
        for v in vec:
            x, y = cur[0] + v[0], cur[1] + v[1]
            if x >= 0 and x < N and y >= 0 and y < M:
                if graph[x][y] != 'X' and (x, y) not in visited:
                    if graph[x][y] == 'P':
                        cnt += 1
                    visited.add((x, y))
                    que.append((x, y))
    return cnt if cnt > 0 else "TT"

N, M = map(int, get_input().split())
graph = []
I = (0, 0)
for i in range(N):
    st = list(get_input())
    graph.append(st)
    for j, s in enumerate(st):
        if s == 'I':
            I = (i, j)
print(bfs(graph, I, N, M))

