# https://www.acmicpc.net/problem/2875
def max_teams(N, M, K):
    team_count = min(N // 2, M)
    while (N + M - team_count * 3) < K:
        team_count -= 1
    return team_count

N, M, K = map(int, input().split())
print(max_teams(N, M, K))

