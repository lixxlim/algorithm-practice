# https://www.acmicpc.net/problem/28808

n, _ = map(int, input().split())
problems = sum(1 if "+" in input() else 0 for _ in range(n))
print(problems)

