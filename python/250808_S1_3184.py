# https://www.acmicpc.net/problem/3184
import sys
from collections import deque

def get_input():
    return sys.stdin.readline().strip()

def bfs(graph, R, C, i, j):
    if graph[i][j] == "#":
        return ("x", 0)

    o = v = 0
    if graph[i][j] == "o":
        o += 1
    elif graph[i][j] == "v":
        v += 1
    que = deque([(i, j)])
    graph[i][j] = "#"

    while que:
        cur_x, cur_y = que.popleft()
        for dx, dy in [(1,0), (0,1), (-1,0), (0,-1)]:
            nx, ny = cur_x + dx, cur_y + dy
            if 0 <= nx < R and 0 <= ny < C and graph[nx][ny] != "#":
                match graph[nx][ny]:
                    case "o":
                        o += 1
                    case "v":
                        v += 1
                graph[nx][ny] = "#"
                que.append((nx, ny))

    if o == v == 0:
        return ("x", 0)
    elif o > v:
        return ("o", o)
    else:
        return ("v", v)

if __name__ == "__main__":
    R, C = map(int, get_input().split())
    graph = [ list(get_input()) for _ in range(R) ]

    o, v = 0, 0
    for i in range(R):
        for j in range(C):
            t, amt = bfs(graph, R, C, i, j)
            if t == "o":
                o += amt
            elif t == "v":
                v += amt
    print(o, v)

