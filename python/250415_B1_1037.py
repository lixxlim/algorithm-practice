# https://www.acmicpc.net/problem/1037
n = int(input())
nums = sorted(list(map(int, input().split())))
print(nums[0] * nums[n-1])
