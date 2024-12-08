# https://www.acmicpc.net/problem/29546

n = int(input())
images = [ input() for _ in range(n) ]

m = int(input())
group = [ map(int, input().split()) for _ in range(m) ]

for s, e in group:
    print("\n".join(images[s-1:e]))
