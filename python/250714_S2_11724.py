# https://www.acmicpc.net/problem/11724
import sys
from collections import defaultdict, deque

N, M = map(int, sys.stdin.readline().strip().split())
maps = defaultdict(list)
for _ in range(M):
    a, b = map(int, sys.stdin.readline().strip().split())
    maps[a].append(b)
    maps[b].append(a)
for key in maps:
    maps[key].sort()

visited = [ False for _ in range(N + 1) ]

connected = 0
for node in range(1, N + 1):
    queue = deque()
    if not visited[node]:
        visited[node] = True
        queue.append(node)
        connected += 1
        while queue:
            target = queue.popleft()
            for neighbor in maps[target]:
                if not visited[neighbor]:
                    visited[neighbor] = True
                    queue.append(neighbor)
print(connected)
