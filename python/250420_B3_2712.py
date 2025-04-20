# https://www.acmicpc.net/problem/2712
n = int(input())
for _ in range(n):
    inp = input().split()
    num = float(inp[0])
    if inp[1] == "kg":
        print(f"{num * 2.2046:.4f} lb")
    if inp[1] == "lb":
        print(f"{num * 0.4536:.4f} kg")
    if inp[1] == "l":
        print(f"{num * 0.2642:.4f} g")
    if inp[1] == "g":
        print(f"{num * 3.7854:.4f} l")
