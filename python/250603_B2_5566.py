# https://www.acmicpc.net/problem/5566
n, m = map(int, input().split())
maps = [ int(input()) for _ in range(n) ]
dice = [ int(input()) for _ in range(m) ]
pivot = 0
cnt = 0
for d in dice:
    cnt += 1
    pivot += d
    if pivot >= n:
        break
    pivot += maps[pivot]
    if pivot >= n:
        break
print(cnt)
