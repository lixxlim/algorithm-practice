# https://www.acmicpc.net/problem/2847
import sys

n = int(sys.stdin.readline().strip())
levels = [ int(sys.stdin.readline().strip()) for _ in range(n) ]
levels.reverse()
ret = 0
for i in range(n-1):
    if levels[i] <= levels[i+1]:
        new_point = levels[i] - 1 
        ret += (levels[i+1] - new_point)
        levels[i+1] = new_point
print(ret)

