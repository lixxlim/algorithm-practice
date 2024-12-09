# https://www.acmicpc.net/problem/29683

n, a = map(int, input().split())
rec = map(int, input().split())

print(sum(l//a for l in rec))
