# https://www.acmicpc.net/problem/30031
money = 0
n = int(input())
for i in range(n):
    wh = list(map(int, input().split()))
    if wh[0] == 136:
        money += 1000
    elif wh[0] == 142:
        money += 5000
    elif wh[0] == 148:
        money += 10000
    elif wh[0] == 154:
        money += 50000
print(money)
