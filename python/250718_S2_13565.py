# https://www.acmicpc.net/problem/13565
import sys
import copy
from collections import defaultdict, deque

vec = [ (0, -1), (0, 1), (1, 0), (-1, 0) ]

def get_input():
    return sys.stdin.readline().strip()

def bfs(figure, M, N, i):
    que = deque([(0, i)])
    while que:
        rw, co = que.popleft()
        if figure[rw][co] == 0:
            figure[rw][co] = -1
            for tp in vec:
                x, y = tp[0] + rw, tp[1] + co
                if x >= 0 and x < M and y >=0 and y < N:
                    if figure[x][y] == 0:
                        if x == (M - 1):
                            return 1
                        que.append((x, y))
    return 0

if __name__ == "__main__":
    M, N = map(int, get_input().split())
    figure = [ list(map(int, list(get_input()))) for _ in range(M) ]
    visited = copy.deepcopy(figure)
    ret = "NO"
    for i in range(N):
        if bfs(figure, M, N, i) == 1:
            ret = "YES"
            break;
    print(ret)

