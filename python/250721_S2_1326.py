# https://www.acmicpc.net/problem/1326
from collections import deque

def bfs(N, stones, a, b):
    visited = [-1] * (N + 1)
    visited[a] = 0
    que = deque([a])

    while que:
        cur = que.popleft()
        step = stones[cur-1]

        for dir in [-1, 1]:
            next_post = cur + (dir * step)
            while 1 <= next_post <= N:
                if visited[next_post] == -1:
                    visited[next_post] = visited[cur] + 1
                    if next_post == b:
                        return visited[next_post]
                    que.append(next_post)
                next_post += dir * step
    return -1

if __name__ == "__main__":
    N = int(input())
    stones = list(map(int, input().split()))
    a, b = map(int, input().split())
    print(bfs(N, stones, a, b))

