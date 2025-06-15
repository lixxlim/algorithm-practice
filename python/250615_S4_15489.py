# https://www.acmicpc.net/problem/15489
def get_pascal_tri(n):
    ret = [[1], [1, 1]]
    for i in range(2, n):
        arr = [1]
        for j in range(1, i):
            arr.append(ret[i-1][j-1] + ret[i-1][j])
        arr.append(1)
        ret.append(arr)
    return ret

def get_sum_inner(arr, r, c, w):
    sum_inner = 0
    cnt = 1
    for i in range(r, r + w):
        for j in range(cnt):
            sum_inner += arr[i][j + c]
        cnt += 1
    return sum_inner

r, c, w = map(int, input().split())
pascal = get_pascal_tri(r + w - 1)
print(get_sum_inner(pascal, r - 1, c - 1, w))
