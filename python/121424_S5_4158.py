# https://www.acmicpc.net/problem/4158
import sys
inp = sys.stdin.read().split()[:-2]
p = 0

while len(inp) > p:
    gunNum, yngNum = map(int, inp[p:p+2])
    p += 2
    gunCds = set(inp[p:p+gunNum])
    p += gunNum
    yngCds = set(inp[p:p+yngNum])
    p += yngNum
    intersec = gunCds & yngCds

    print(len(intersec))
