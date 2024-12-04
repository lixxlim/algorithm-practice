# https://www.acmicpc.net/problem/29267

n, k = map(int, input().split())
current = 0;
saved = 0;
result = []

for i in range(n):
    inp = input()
    if inp == "save":
        saved = current
    elif inp == "load":
        current = saved
    elif inp == "shoot":
        current -= 1
    elif inp == "ammo":
        current += k
    result.append(current)

print("\n".join(map(str, result)))
