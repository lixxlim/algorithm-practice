# https://www.acmicpc.net/problem/11536

n = int(input())
ret = 0
name_before = input()

for _ in range(n-1):
    name = input()
    if name > name_before:
        ret -= 1
    elif name < name_before:
        ret += 1
    name_before = name

if ret == n-1:
    print("DECREASING")
elif ret == (n-1) * -1:
    print("INCREASING")
else:
    print("NEITHER")

#def solution(palyers):
#    if palyers == sorted(palyers):
#        print("INCREASING")
#    elif palyers == sorted(palyers, reverse=True):
#        print("DECREASING")
#    else:
#        print("NEITHER")
#
#palyers = [ input() for _ in range(int(input())) ]
#solution(palyers)
