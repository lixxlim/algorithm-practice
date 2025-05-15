# https://www.acmicpc.net/problem/14729
import sys

n = int(input())
nums = sorted([float(sys.stdin.readline()) for _ in range(n)])
[print(f"{nums[i]:.3f}") for i in range(7)]
    
