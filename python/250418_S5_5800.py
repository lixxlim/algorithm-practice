# https://www.acmicpc.net/problem/5800
for i in range(int(input())):
    inp = list(map(int, input().split()))
    maxGap = 0;
    n = inp[0]
    lst = sorted(inp[1:])
    for j in range(1, n):
        gap = lst[j] - lst[j-1]
        if maxGap < gap:
            maxGap = gap
    print(f"Class {i+1}")
    print(f"max {lst[n-1]}, min {lst[0]}, Largest gap {maxGap}")
