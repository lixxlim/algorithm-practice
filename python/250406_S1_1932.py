# https://www.acmicpc.net/problem/1932
n = int(input())
arr = [0] * n
arr[0] = int(input())
for i in range(1, n):
    ns = [ int(num) for num in input().split() ]
    for j in range(len(ns) - 1, 0, -1):
        arr[j] = max(arr[j - 1], arr[j]) + ns[j]
    arr[0] += ns[0]
print(max(arr))
