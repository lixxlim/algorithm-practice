# https://www.acmicpc.net/problem/5347

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return (a * b) // gcd(a, b)

[print(lcm(*map(int, input().split()))) for _ in range(int(input()))]
