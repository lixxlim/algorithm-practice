# https://www.acmicpc.net/problem/6591
import sys
import math

def main():
    while True:
        line = sys.stdin.readline()
        if not line:
            break
        n, k = map(int, line.strip().split())
        if n == 0 and k == 0:
            break
        print(math.comb(n, k))

if __name__ == "__main__":
    main()
