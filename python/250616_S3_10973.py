# https://www.acmicpc.net/problem/10973
import sys

def prev_permutation(arr):
    n = len(arr)
    i = n - 2
    while i >= 0 and arr[i] < arr[i+1]:
        i -= 1
    if i == -1:
        return [-1]
    j = n - 1
    while arr[i] <= arr[j]:
        j -= 1
    arr[i], arr[j] = arr[j], arr[i]
    left = i + 1
    right = n - 1
    while left < right:
        arr[left], arr[right] = arr[right], arr[left]
        left += 1
        right -= 1
    return arr

N = int(sys.stdin.readline())
permutation = list(map(int, sys.stdin.readline().split()))
result = prev_permutation(permutation)
if result[0] == -1:
    print(-1)
else:
    print(*result)
