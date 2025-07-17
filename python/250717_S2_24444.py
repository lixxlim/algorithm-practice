# https://www.acmicpc.net/problem/24444
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

def bfs(graph, N, start):
    res = [0] * N
    res[start-1] = 1
    idx = 2
    visited = set([start])
    que = deque([start])
    while que:
        cur = que.popleft()
        for neighbor in graph[cur]:
            if neighbor not in visited:
                visited.add(neighbor)
                que.append(neighbor)
                res[neighbor-1] = idx
                idx += 1
    return res

if __name__ == "__main__":
    N, M, R = map(int, get_input().split())
    graph = defaultdict(list)
    for _ in range(M):
        a, b = map(int, get_input().split())
        graph[a].append(b)
        graph[b].append(a)
    for k in graph:
        graph[k].sort()
    res = bfs(graph, N, R)
    for v in res:
        print(v)
