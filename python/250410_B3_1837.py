# https://www.acmicpc.net/problem/1837
import sys

P_str, K_str = input().split()
P = int(P_str)
K = int(K_str)

is_good = True
bad_factor = -1

for i in range(2, K):
    if P % i == 0:
        is_good = False
        bad_factor = i
        break

if is_good:
    print("GOOD")
else:
    print(f"BAD {bad_factor}")
