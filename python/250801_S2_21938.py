# https://www.acmicpc.net/problem/21938
import sys
from collections import deque

def get_input():
    return sys.stdin.readline().strip()

def convert_monitor(monitor, N, M, T):
    new_monitor = [ [0] * M for _ in range(N) ]
    for n in range(N):
        for m in range(M):
            idx = m * 3
            rgb = 0
            for j in range(3):
                rgb += monitor[n][idx + j]
            avg = rgb // 3
            if avg >= T:
                new_monitor[n][m] = 1
    return new_monitor

def ditect_object(monitor, N, M):
    cnt = 0
    for n in range(N):
        for m in range(M):
            if monitor[n][m] == 1:
                cnt += 1
                que = deque([(n, m)])
                while que:
                    cx, cy = que.popleft()
                    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        next_x, next_y = cx + x, cy + y
                        if next_x >= 0 and next_x < N and next_y >= 0 and next_y < M and monitor[next_x][next_y] == 1:
                            que.append((next_x, next_y))
                            monitor[next_x][next_y] = 0

    return cnt

N, M = map(int, get_input().split())
monitor = [ list(map(int, get_input().split())) for _ in range(N) ]
T = int(get_input())

new_monitor = convert_monitor(monitor, N, M, T)
res = ditect_object(new_monitor, N, M)
print(res)
