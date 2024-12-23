# https://www.acmicpc.net/problem/30868
import sys

inp = list(map(int, sys.stdin.read().split()))[1:]
ret = []

def solution(m):
    i = m // 5
    j = m % 5
    ret.append("++++ " * i) 
    ret.append("|" * j)
    ret.append("\n")

for n in inp:
    solution(n)

print("".join(ret))
