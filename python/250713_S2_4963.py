# https://www.acmicpc.net/problem/4963
import sys
sys.setrecursionlimit(10000)

vec = [ (-1, -1), (-1, 0), (-1, 1), (0, -1), (0, 1), (1, -1), (1, 0), (1, 1) ]

def get_input():
    return sys.stdin.readline().strip().split()

def checker_island(maps, i, j, visited):
    visited[i][j] = True
    for x, y in vec:
        ix, jy = i + x, j + y
        if 0 <= ix < len(maps) and 0 <= jy < len(maps[0]):
            if not visited[ix][jy] and maps[ix][jy] == 1:
                checker_island(maps, ix, jy, visited)
    return

def search_island(maps, w, h):
    cnt = 0
    visited = [[ False for _ in range(w) ] for _ in range(h) ]
    for i in range(h):
        for j in range(w):
            if not visited[i][j] and maps[i][j] == 1:
                visited[i][j] = True
                checker_island(maps, i, j, visited)
                cnt += 1
    return cnt

ret = []
while True:
    w, h = map(int, get_input())
    if w == h == 0:
        break
    maps = [ list(map(int, get_input())) for _ in range(h) ]
    ret.append(search_island(maps, w, h))

for r in ret:
    print(r)

