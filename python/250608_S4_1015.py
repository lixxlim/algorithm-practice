# https://www.acmicpc.net/problem/1015
n = int(input())
A = list(map(int, input().split()))
B = sorted(A)
P = [ -1 for _ in range(n) ]
for i in range(n):
    for j in range(n):
        if A[j] == B[i]:
            P[j], A[j] = i, -1
            break
print(*P)
