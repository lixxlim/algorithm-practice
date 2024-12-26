# https://www.acmicpc.net/problem/30979

t = int(input())
_ = int(input())
candy = sum(map(int, input().split()))

print("Padaeng_i Happy") if candy >= t else print("Padaeng_i Cry")
