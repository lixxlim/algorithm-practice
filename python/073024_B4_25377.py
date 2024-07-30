# https://www.acmicpc.net/problem/25377
n = int(input())
ret = 1000
for i in range(n):
    a, b = map(int, input().split())
    ret = min(ret, b) if b - a >= 0 else ret
print(ret if ret != 1000 else -1)
