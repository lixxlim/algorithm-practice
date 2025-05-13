# https://www.acmicpc.net/problem/16212
n = int(input())
nums = sorted(list(map(int, input().split())))
print(" ".join([ str(num) for num in nums ]))
