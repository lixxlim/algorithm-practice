# https://www.acmicpc.net/problem/2583
import sys
from collections import defaultdict, deque

def get_input():
    return list(map(int, sys.stdin.readline().strip().split()))

def bfs(graph, M, N, x, y, visited):
    if (x, y) in visited or graph[x][y] == -1:
        return 0

    ret = 1
    visited.add((x, y))
    que = deque([(x, y)])
    while que:
        cur_x, cur_y = que.popleft()
        for dir_x, dir_y in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
            nxt_x, nxt_y = cur_x + dir_x, cur_y + dir_y
            if nxt_x >= 0 and nxt_x < M and nxt_y >= 0 and nxt_y < N:
                if (nxt_x, nxt_y) not in visited and graph[nxt_x][nxt_y] == 0:
                    visited.add((nxt_x, nxt_y))
                    que.append((nxt_x, nxt_y))
                    ret += 1

    return ret

M, N, K = get_input()
graph = [ [0] * N for _ in range(M) ]

for _ in range(K):
    x1, y1, x2, y2 = get_input()
    for x in range(x1, x2):
        for y in range(y1, y2):
            graph[y][x] = -1

results = []
visited = set()
for x in range(M):
    for y in range(N):
        result = bfs(graph, M, N, x, y, visited)
        if result > 0:
            results.append(result)

print(len(results))
print(" ".join(map(str, sorted(results))))

