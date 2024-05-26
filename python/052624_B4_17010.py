# https://www.acmicpc.net/problem/17010
import sys

L = int(sys.stdin.readline())
answer = []
for i in range(L):
    N, x = sys.stdin.readline().split()
    answer.append(x*int(N)+"\n")
sys.stdout.write(''.join(answer))
