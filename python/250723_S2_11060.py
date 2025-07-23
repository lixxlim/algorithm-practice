# https://www.acmicpc.net/problem/11060
from collections import deque

def search(N, miro):
    visited = [False] * N
    queue = deque()
    queue.append((0, 0)) 
    visited[0] = True
    while queue:
        idx, cnt = queue.popleft()
        if idx == N - 1:
            return cnt 
        for jump in range(1, miro[idx] + 1):
            next_idx = idx + jump
            if next_idx < N and not visited[next_idx]:
                visited[next_idx] = True
                queue.append((next_idx, cnt + 1))
    return -1

N = int(input())
miro = list(map(int, input().split()))
print(search(N, miro))
