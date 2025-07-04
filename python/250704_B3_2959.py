# https://www.acmicpc.net/problem/2959
n = sorted(map(int, input().split()))
x = min(n[0], n[1])
y = min(n[2], n[3])
print(x * y)
