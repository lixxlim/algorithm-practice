# https://www.acmicpc.net/problem/18352
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

N, M, K, X = map(int, get_input().split())
result = []
graph = defaultdict(list)
dist = [0] * (N + 1)
for _ in range(M):
    a, b = map(int, get_input().split())
    graph[a].append(b)

visited = set([X])
que = deque([X])
while que:
    cur = que.popleft()
    for neighbor in graph[cur]:
        if neighbor not in visited:
            que.append(neighbor)
            visited.add(neighbor)
            dist[neighbor] = dist[cur] + 1
            if dist[neighbor] == K:
                result.append(neighbor)

if len(result) == 0:
    print("-1")
else:
    for r in sorted(result):
        print(r)
