# https://www.acmicpc.net/problem/9237
n = int(input())
ns = sorted(list(map(int, input().split())), reverse=True)
print(max([ i + v + 2 for i, v in enumerate(ns) ]))
