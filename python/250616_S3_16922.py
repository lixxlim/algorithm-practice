# https://www.acmicpc.net/problem/16922
N = int(input())
values = [ 1, 5, 10, 50 ]
dp = [ set() for _ in range(N + 1) ]
dp[ 0 ].add(0)

for n in range(N):
    for s in dp[n]:
        for v in values:
            dp[ n + 1 ].add(s + v)

print(len(dp[N]))
