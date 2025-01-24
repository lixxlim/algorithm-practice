# https://www.acmicpc.net/problem/13301

n = int(input())
dp = [0,1,1,2]
for i in range(4, n+1):
    dp.append(dp[i-1] + dp[i-2])
print((dp[n] * 4) + (dp[n-1] * 2))
