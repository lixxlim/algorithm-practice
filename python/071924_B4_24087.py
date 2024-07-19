# https://www.acmicpc.net/problem/24087
sab = []
for i in range(3):
    sab.append(int(input()))
ret = 250
if sab[0] > sab[1] :
    ret += ((sab[0] - sab[1] - 1) // sab[2] + 1) * 100
print(ret)
