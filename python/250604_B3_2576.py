# https://www.acmicpc.net/problem/2576
sum = 0
min = 100
for _ in range(7):
    n = int(input())
    if n & 1:
        sum += n
        min = n if n < min else min
print(str(sum) + "\n" + str(min) if sum > 0 else "-1")
