# https://www.acmicpc.net/problem/4134
import sys

def is_prime(n):
    if n <= 1:
        return False
    elif n <= 3:
        return True
    elif n % 2 == 0:
        return False
    d = n - 1
    s = 0
    while d % 2 == 0:
        d //= 2
        s += 1
    bases = [2, 3, 5, 7, 11, 13]
    for a in bases:
        if a >= n:
            continue
        x = pow(a, d, n)
        if x == 1 or x == n - 1:
            continue
        composite = True
        for _ in range(s - 1):
            x = pow(x, 2, n)
            if x == n - 1:
                composite = False
                break
        if composite:
            return False
    return True

def next_prime(n):
    if n <= 2:
        return 2
    if n % 2 == 0:
        n += 1
    candidate = n
    while True:
        if is_prime(candidate):
            return candidate
        candidate += 2

t = int(sys.stdin.readline())
for _ in range(t):
    n = int(sys.stdin.readline())
    print(next_prime(n))
