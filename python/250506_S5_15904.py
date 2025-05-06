# https://www.acmicpc.net/problem/15904

inp = input()
ucpc = ['U', 'C', 'P', 'C']
p = 0
for s in inp:
    if s == ucpc[p]:
        p += 1
        if p == len(ucpc):
            break
print("I love UCPC") if p == len(ucpc) else print("I hate UCPC")
