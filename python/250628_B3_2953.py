# https://www.acmicpc.net/problem/2953
ps = [ (sum(map(int, input().split())), i+1) for i in range(5) ]
ps.sort(reverse=True)
print(ps[0][1], ps[0][0])
