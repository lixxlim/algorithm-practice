# https://www.acmicpc.net/problem/17086
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip().split()

N, M = map(int, get_input())
graph = [ list(map(int, get_input())) for i in range(N) ]

que = deque()
for i in range(N):
    for j in range(M):
        if graph[i][j] == 1:
            que.append((i, j))

max_val = 1
while que:
    cur_i, cur_j = que.popleft()
    for i, j in [(-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1)]:
        next_i = i + cur_i
        next_j = j + cur_j
        if next_i >= 0 and next_i < N and next_j >= 0 and next_j < M and graph[next_i][next_j] == 0:
            graph[next_i][next_j] = graph[cur_i][cur_j] + 1
            que.append((next_i, next_j))
            max_val = max(max_val, graph[next_i][next_j])

print(max_val - 1)
    
