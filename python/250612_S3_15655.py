# https://www.acmicpc.net/problem/15655

def solution(nums, m):
    res = []
    def get_response(arr, idx):
        if len(arr) == m:
            res.append(tuple(arr))
            return
        if len(nums) == idx:
            return
        arr.append(nums[idx])
        get_response(arr, idx+1)
        arr.pop()
        get_response(arr, idx+1)
    get_response([], 0)
    return res

if __name__ == "__main__":
    n, m = map(int, input().split())
    nums = sorted(list(map(int, input().split())))
    ret = solution(nums, m)
    [ print(*v) for i, v in enumerate(ret) ]
        
