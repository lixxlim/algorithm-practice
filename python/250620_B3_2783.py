# https://www.acmicpc.net/problem/2783
X, Y = map(int, input().split())
N = int(input())
min_cost = (X / Y) * 1000
for _ in range(N):
    Xi, Yi = map(int, input().split())
    cost = (Xi / Yi) * 1000
    if cost < min_cost:
        min_cost = cost
print(f"{min_cost:.2f}")

