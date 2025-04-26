# https://www.acmicpc.net/problem/11004

n, k = map(int, input().split())
nums = sorted(list(map(int, input().split())))
print(nums[k-1])
