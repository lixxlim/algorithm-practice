# https://www.acmicpc.net/problem/11576

def convert_to_base(num, base):
    ret = []
    while num > 0:
        ret.append(str(num % base))
        num //= base
    return ret[::-1]

A, B = map(int, input().split())
m = int(input())
ms = list(reversed(list(map(int, input().split()))))
ms_sum = sum([ ms[i] * (A ** i) for i in range(m) ])

print(" ".join(convert_to_base(ms_sum, B)))
