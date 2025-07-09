# https://www.acmicpc.net/problem/24446
import sys
from collections import defaultdict, deque

def get_depth(edges, start, N):
    visited = [ False ] * (N + 1)
    depth = [ -1 ] * (N + 1)

    q = deque()
    q.append(start)
    visited[start] = True
    depth[start] = 0

    while q:
        current = q.popleft()
        for neighbor in graph[current]:
            if not visited[neighbor]:
                visited[neighbor] = True
                depth[neighbor] = depth[current] + 1
                q.append(neighbor)

    return depth

if __name__ == "__main__":
    N, M, R = map(int, sys.stdin.readline().strip().split())
    edges = [ list(map(int, sys.stdin.readline().strip().split())) for _ in range(M) ]

    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        graph[v].append(u)
    for key in graph:
        graph[key].sort()

    depth_result = get_depth(graph, R, N)

    for i in range(1, N + 1):
        print(depth_result[i])
