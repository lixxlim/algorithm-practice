# https://www.acmicpc.net/problem/11256
def solution(J, N, NS):
    cnt = 0
    for i in range(N):
        J -= NS[i]
        cnt += 1
        if J <= 0 :
            break
    return cnt

T = int(input())
for _ in range(T):
    J, N = map(int, input().split())
    NS = []
    for _ in range(N):
        R, C = map(int, input().split())
        NS.append(R * C)
    print(solution(J, N, sorted(NS, reverse=True)))
