# https://www.acmicpc.net/problem/6118
import sys
from collections import defaultdict, deque

def get_input():
    return map(int, sys.stdin.readline().strip().split())

if __name__ == "__main__":
    N, M = get_input()
    graph = defaultdict(list)
    for _ in range(M):
        a, b = get_input()
        graph[a].append(b)
        graph[b].append(a)

    visited = set([1])
    que = deque([1])
    dist = [0] * (N + 1)
    while que:
        cur = que.popleft()
        for neighbor in graph[cur]:
            if neighbor not in visited:
                visited.add(neighbor)
                que.append(neighbor)
                dist[neighbor] = dist[cur] + 1
    max_dist = max(dist)
    result = sorted([i for i, x in enumerate(dist) if x == max_dist])
    print(result[0], max_dist, len(result))

