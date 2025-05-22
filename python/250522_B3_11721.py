# https://www.acmicpc.net/problem/11721
inp = input()
size = len(inp)
n = (size -1) // 10 + 1
for i in range(n):
    st = (i * 10)
    ed = (i + 1) * 10
    print(inp[st:ed])
