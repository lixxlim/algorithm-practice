# https://www.acmicpc.net/problem/10219
count = int(input())

for j in range(count):
    h, w = map(int, input().split())
    for i in range(h):
        a = input()
        b = w - 1
        while b >= 0:
            print(a[b], end="")
            b -= 1
        print()
