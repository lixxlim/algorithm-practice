# https://www.acmicpc.net/problem/14912

n, d = map(int, input().split())
line = "".join([ str(i) for i in range(1, n+1) ])
print(line.count(str(d)))
