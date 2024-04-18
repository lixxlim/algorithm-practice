# https://www.acmicpc.net/problem/11948
sum = 0
min = 100
for _ in range(4):
    inp = int(input())
    sum += inp
    min = inp if inp < min else min
sum -= min
min = 100
for _ in range(2):
    inp = int(input())
    sum += inp
    min = inp if inp < min else min
sum -= min
print(sum)