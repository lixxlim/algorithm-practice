# https://www.acmicpc.net/problem/16953
import sys

def get_input():
    return sys.stdin.readline().strip()

A, B = map(int, get_input().split())
cnt = 1
while A != B:
    if B % 10 == 1:
        B = B // 10
    else:
        B = B / 2
    if A > B:
        cnt = -1
        break
    cnt += 1

print(cnt)

