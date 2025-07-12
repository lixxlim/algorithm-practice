# https://www.acmicpc.net/problem/25418
from collections import deque

def bfs(A, K):
    visited = set()
    queue = deque([(A, 0)])
    visited.add(A)

    while queue:
        a, cnt = queue.popleft()
        if a == K:
            return cnt

        if a + 1 <= K and (a + 1) not in visited:
            visited.add(a + 1)
            queue.append((a + 1, cnt + 1))

        if a * 2 <= K and (a * 2) not in visited:
            visited.add(a * 2)
            queue.append((a * 2, cnt + 1))

    return -1

if __name__ == "__main__":
    A, K = map(int, input().split())
    print(bfs(A, K))
