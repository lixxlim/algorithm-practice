# https://www.acmicpc.net/problem/4383
import sys
inp = list(map(int, sys.stdin.read().split()))
p = 0

while len(inp) > p:
    n = inp[p]
    p += 1
    jolly = list(range(1, n))
    be = inp[p]
    for i in range(1, n):
        af = inp[p+i]
        try:
            jolly.remove(abs(be - af))
        except ValueError:
            pass
        be = af
    if len(jolly) == 0:
        print("Jolly")
    else:
        print("Not jolly")
    p += n

