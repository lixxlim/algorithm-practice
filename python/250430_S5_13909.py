# https://www.acmicpc.net/problem/13909
#n = int(input())
#window = [0] * n
#for i in range(1, n + 1):
#    for j in range(i, n, i):
#        window[j] = 1 if window[j] == 0 else 0
#print(sum(window))
n = int(input())
result = int(n**0.5)
print(result)
