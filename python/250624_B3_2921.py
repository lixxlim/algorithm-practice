# https://www.acmicpc.net/problem/2921
N = int(input())

total = 0
for a in range(N + 1):
    for b in range(a, N + 1):
        total += a + b

print(total)

