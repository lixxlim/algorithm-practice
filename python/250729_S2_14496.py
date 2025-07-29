# https://www.acmicpc.net/problem/14496
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip().split()

def bfs(a, b, N, graph):
    if a == b: 
        print(0); 
        return
    visited = set([a])
    que = deque([a])
    dist = [0] * (N + 1)
    while que:
        cur = que.popleft()
        for neighbor in graph[cur]:
            if neighbor not in visited:
                visited.add(neighbor)
                que.append(neighbor)
                dist[neighbor] = dist[cur] + 1
                if neighbor == b:
                    print(dist[neighbor])
                    return
    print(-1)

a, b = map(int, get_input())
N, M = map(int, get_input())
graph = defaultdict(list)

for _ in range(M):
    x, y = map(int, get_input())
    graph[x].append(y)
    graph[y].append(x)

bfs(a, b, N, graph)

