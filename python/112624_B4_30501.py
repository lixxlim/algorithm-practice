# https://www.acmicpc.net/problem/30501

N = int(input().strip())
answer = [ inp for _ in range(N) if "S" in (inp := input()) ]
print("".join(answer))
