# https://www.acmicpc.net/problem/1946
import sys

n = int(sys.stdin.readline().strip())
for _ in range(n):
    m = int(sys.stdin.readline().strip())
    cadidates = [ list(map(int, sys.stdin.readline().strip().split())) for _ in range(m) ]
    cadidates.sort()
    cnt = 0
    best = float('inf')
    for v1, v2 in cadidates:
        if v2 < best:
            cnt += 1
            best = v2
    print(cnt)
    
