# https://www.acmicpc.net/problem/5426
import math

n = int(input())
for _ in range(n):
    inp = input()
    size = int(math.sqrt(len(inp)))
    ret = ""
    for r in range(size-1, -1, -1):
        for c in range(size):
            ret += inp[r + (c * size)]
    print(ret)
