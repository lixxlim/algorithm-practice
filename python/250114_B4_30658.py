# wibeba4968@nausard.com
import sys

n = int(input())
while n != 0:
    num = [ int(input()) for _ in range(n) ]
    print(*num[::-1], sep='\n', end="\n0\n")
    n = int(input())
