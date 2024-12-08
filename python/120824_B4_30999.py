# https://www.acmicpc.net/problem/30999

n, m = map(int, input().split())
ret = sum(1 if (m // 2) < len(input().replace("X", "")) else 0 for _ in range(n))
print(ret)
