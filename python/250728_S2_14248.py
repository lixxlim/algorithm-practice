# https://www.acmicpc.net/problem/14248
import sys
from collections import defaultdict, deque

def get_input():
    return sys.stdin.readline().strip()

n = int(get_input())
stons = list(map(int, get_input().split()))
s = int(get_input())

idx = s - 1
visited = set([idx])
que = deque([idx])
while que:
    cur = que.popleft()
    for i in [-1, 1]:
        next_idx = cur + (i * stons[cur])
        if next_idx >= 0 and next_idx < n and next_idx not in visited:
            visited.add(next_idx)
            que.append(next_idx)

print(len(visited))

