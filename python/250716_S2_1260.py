# https://www.acmicpc.net/problem/1260
import sys
from collections import defaultdict, deque
sys.setrecursionlimit(10**6)

def get_input():
    return sys.stdin.readline().strip()

def dfs(graph, cur, visited, result):
    visited.add(cur)
    result.append(cur)
    for neighbor in graph[cur]:
        if neighbor not in visited:
            dfs(graph, neighbor, visited, result)

def bfs(graph, que, visited, result):
    while que:
        cur = que.popleft()
        for neighbor in graph[cur]:
            if neighbor not in visited:
                que.append(neighbor)
                visited.add(neighbor)
                result.append(neighbor)
    return result

if __name__ == "__main__":
    graph = defaultdict(list)
    N, M, V = map(int, get_input().split())
    for _ in range(M):
        a, b = map(int, get_input().split())
        graph[a].append(b)
        graph[b].append(a)
    for k in graph:
        graph[k].sort()

    result_dfs = []
    dfs(graph, V, set(), result_dfs)
    print(" ".join(map(str, result_dfs)))
    print(" ".join(map(str, bfs(graph, deque([V]), set([V]), [V]))))

