# https://www.acmicpc.net/problem/10886

n = int(input())
ret = 0
for _ in range(n):
    if int(input()):
        ret += 1
    else:
        ret -= 1
print("Junhee is cute!" if ret > 0 else "Junhee is not cute!")
