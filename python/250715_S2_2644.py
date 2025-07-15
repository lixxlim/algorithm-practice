# https://www.acmicpc.net/problem/2644
# 00:36:21

import sys
from collections import defaultdict, deque

def bfs(graph, start, target, n):
    distance = [0] * (n + 1)
    visited = [False] * (n + 1)
    que = deque([start])

    while que:
        cur = que.popleft()
        visited[cur] = True
        if cur == target:
            return distance[cur]
        for neighbor in graph[cur]:
            if not visited[neighbor]:
                distance[neighbor] = distance[cur] + 1
                que.append(neighbor)
    return -1

if __name__ == "__main__":
    n = int(sys.stdin.readline().strip())
    a, b = map(int, sys.stdin.readline().strip().split())
    m = int(sys.stdin.readline().strip())

    graph = defaultdict(list)
    for _ in range(m):
        x, y = map(int, sys.stdin.readline().strip().split())
        graph[x].append(y)
        graph[y].append(x)

    print(bfs(graph, a, b, n))

