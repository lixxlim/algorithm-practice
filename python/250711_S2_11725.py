# https://www.acmicpc.net/problem/11725
import sys
from collections import defaultdict, deque

N = int(sys.stdin.readline().strip())
tree = defaultdict(list)

for _ in range(N - 1):
    a, b = map(int, sys.stdin.readline().strip().split())
    tree[a].append(b)
    tree[b].append(a)

parent = [0] * (N + 1)
queue = deque([1])
visited = [False] * (N + 1)
visited[1] = True

while queue:
    current = queue.popleft()
    for neighbor in tree[current]:
        if not visited[neighbor]:
            parent[neighbor] = current
            visited[neighbor] = True
            queue.append(neighbor)

for i in range(2, N + 1):
    print(parent[i])

