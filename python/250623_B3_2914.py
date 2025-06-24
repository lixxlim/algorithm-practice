# https://www.acmicpc.net/problem/2914
import sys

A, I = map(int, sys.stdin.readline().split())
result = (I - 1) * A + 1
print(result)

