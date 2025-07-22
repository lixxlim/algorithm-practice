# https://www.acmicpc.net/problem/5567
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

N = int(get_input())
M = int(get_input())
graph = defaultdict(list)
for _ in range(M):
    a, b = map(int, get_input().split())
    graph[a].append(b)
    graph[b].append(a)

visited = set([1])
que = deque([1])
visited_seq = [-1] * (N + 1)
visited_seq[1] = 0
while que:
    cur = que.popleft()
    for neighbor in graph[cur]:
        if neighbor not in visited and visited_seq[cur] < 2:
            visited_seq[neighbor] = visited_seq[cur] + 1
            visited.add(neighbor)
            que.append(neighbor)
print(len(visited) - 1)
        
