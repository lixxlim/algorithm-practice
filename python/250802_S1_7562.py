# https://www.acmicpc.net/problem/7562
import sys
from collections import defaultdict, deque

direction = [ (-2, -1), (-2, 1), (-1, -2), (1, -2), (2, -1), (2, 1), (-1, 2), (1, 2) ]

def get_input():
    return sys.stdin.readline().strip()

def bfs():
    I = int(get_input())
    dist = [ [0] * I for _ in range(I) ]
    str_x, str_y = map(int, get_input().split())
    pur_x, pur_y = map(int, get_input().split())
    if (str_x, str_y) == (pur_x, pur_y):
        return 0
    visited = set([(str_x, str_y)])
    que = deque([(str_x, str_y)])
    while que:
        cur_x, cur_y = que.popleft()
        for x, y in direction:
            nex_x, nex_y = cur_x + x, cur_y + y
            if (nex_x, nex_y) == (pur_x, pur_y):
                return dist[cur_x][cur_y] + 1
            if nex_x >= 0 and nex_x < I and nex_y >=0 and nex_y < I:
                if (nex_x, nex_y) not in visited:
                    visited.add((nex_x, nex_y))
                    que.append((nex_x, nex_y))
                    dist[nex_x][nex_y] = dist[cur_x][cur_y] + 1

if __name__ == "__main__":
    N = int(get_input())
    result = []
    for _ in range(N):
        result.append(bfs())

    for res in result:
        print(res)

