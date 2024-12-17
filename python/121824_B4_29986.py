# https://www.acmicpc.net/problem/29986

n, h = map(int, input().split())
adv = list(map(int, input().split()))

cnt = sum(1 if h >= adv[i] else 0 for i in range(n))
print(cnt)
