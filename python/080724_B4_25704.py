# https://www.acmicpc.net/problem/25704

n = int(input())
p = int(input())
cp = [0]

if n >= 5 :
    cp.append(500)
if n >= 10 :
    cp.append(p//10)
if n >= 15 :
    cp.append(2000)
if n >= 20 :
    cp.append(p//4)

print(p - max(cp) if max(cp) < p else 0)
