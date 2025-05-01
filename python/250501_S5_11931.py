# https://www.acmicpc.net/problem/11931
#ns = sorted([ int(input()) for _ in range(int(input())) ], reverse=True)
#[ print(v) for v in map(str, ns) ]

import sys

n = int(sys.stdin.readline())
ns = sorted([int(sys.stdin.readline().strip()) for _ in range(n)], reverse=True)
for v in ns:
    print(v)