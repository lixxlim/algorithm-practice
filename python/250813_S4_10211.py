# https://www.acmicpc.net/problem/10211
import sys

def get_input():
    return sys.stdin.readline().strip()

def kadain(N, nums):
    maxValue = -sys.maxsize - 1
    curValue = 0
    for num in nums:
        curValue = max(num, num + curValue)
        maxValue = max(maxValue, curValue)
    return maxValue;

if __name__ == "__main__":
    results = []
    T = int(get_input())
    for _ in range(T):
        N = int(get_input())
        nums = list(map(int, get_input().split()))
        results.append(kadain(N, nums))
    for result in results:
        print(result)
