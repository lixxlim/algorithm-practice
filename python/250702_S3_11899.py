# https://www.acmicpc.net/problem/11899
inp = input()
cnt = 0
ret = 0
for i in inp:
    if i == '(':
        cnt += 1
    if i == ')':
        if cnt > 0:
            cnt -= 1
        else:
            ret += 1
print(ret + cnt)
