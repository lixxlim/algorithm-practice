# https://www.acmicpc.net/problem/16435
num, l = map(int, input().split())
ns = map(int, input().split())
for n in sorted(ns):
    if n > l:
        break
    l += 1
print(l)
