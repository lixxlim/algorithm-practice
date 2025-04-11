# https://www.acmicpc.net/problem/2490
import sys

results_map = ['E', 'A', 'B', 'C', 'D']

for _ in range(3):
    yut_state = list(map(int, sys.stdin.readline().split()))
    num_zeros = yut_state.count(0)
    print(results_map[num_zeros])
