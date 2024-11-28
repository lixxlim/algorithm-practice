# https://www.acmicpc.net/problem/28635

m, a, b = [ int(input()) for _ in range(3) ]
res = b - a if a <= b else (m - a) + b
print(res)
