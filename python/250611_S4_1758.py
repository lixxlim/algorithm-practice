# https://www.acmicpc.net/problem/1758
import sys

ns = sorted([int(sys.stdin.readline().rstrip()) for _ in range(int(input()))], reverse=True)
ret = sum([max(v-i, 0) for i, v in enumerate(ns)])
print(ret)
