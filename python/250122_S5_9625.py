# https://www.acmicpc.net/problem/9625

n = int(input())

screen = [0, 1, 1, ]
for i in range(3, n+1):
    screen.append(screen[i-2] + screen[i-1])

print(screen[n-1], screen[n])
