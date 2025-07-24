# https://www.acmicpc.net/problem/18126
# 00:17:12

import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

N = int(get_input())
home = defaultdict(list)
for _ in range(N - 1):
    a, b, c = map(int, get_input().split())
    home[a].append((b, c))
    home[b].append((a, c))

visited = set([1])
que = deque([(1, 0)])
dist = [0] * (N + 1)
while que:
    cur = que.popleft()[0]
    for neighbor in home[cur]:
        if neighbor[0] not in visited:
            visited.add(neighbor[0])
            que.append(neighbor)
            dist[neighbor[0]] = dist[cur] + neighbor[1]
print(max(dist))

