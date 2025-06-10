# https://www.acmicpc.net/problem/6603
def generate_nums(arr, k):
    res = []
    def backtrack(current, index):
        if len(current) == k:
            res.append(tuple(current))
            return
        if index == len(arr):
            return
        current.append(arr[index])
        backtrack(current, index + 1)
        current.pop()
        backtrack(current, index + 1)
    backtrack([], 0)
    return res

n, *arr = map(int, input().split())
while n :
    nums = generate_nums(arr, 6)
    for num in nums:
        print(*num)
    print("")
    n, *arr = map(int, input().split())

