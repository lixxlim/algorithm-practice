# https://www.acmicpc.net/problem/11478

base = input()
sets = set()
for i in range(len(base)):
    for j in range(i, len(base)):
        sets.add(base[i:j+1])
print(len(sets))
