# https://www.acmicpc.net/problem/28519

n, m = map(int, input().split())

if n > m:
    n, m = m, n 

print(min(n + m, n * 2 + 1))
