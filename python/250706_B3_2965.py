# https://www.acmicpc.net/problem/2965
ns = list(map(int, input().split()))
cnt = 0
while True:
    ns.sort()
    left_diff = ns[1] - ns[0] 
    right_diff = ns[2] - ns[1] 
    if left_diff == 1 and right_diff == 1:
        break
    if left_diff > right_diff:
        ns[2] = ns[0] + 1
    else:
        ns[0] = ns[2] - 1
    cnt += 1
print(cnt)
