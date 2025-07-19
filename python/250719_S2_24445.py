# https://www.acmicpc.net/problem/24445
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip().split()

if __name__ == "__main__":
    N, M, R = map(int, get_input())
    graph = defaultdict(list)
    for _ in range(M):
        a, b = map(int, get_input())
        graph[a].append(b)
        graph[b].append(a)
    for k in graph:
        graph[k].sort(reverse=True)

    idx = 2
    res = [0] * N
    res[R-1] = 1
    visited = set([R])
    que = deque([R])
    while que:
        cur = que.popleft()
        for neighbor in graph[cur]:
            if neighbor not in visited:
                visited.add(neighbor)
                que.append(neighbor)
                res[neighbor-1] = idx
                idx += 1
    for v in res:
        print(v)

