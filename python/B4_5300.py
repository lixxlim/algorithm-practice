# https://www.acmicpc.net/problem/5300

inp = input()
if inp.isdigit():
    n = int(inp)
    result = ""
    for i in range(1, n+1):
        result += str(i) + " "
        if i % 6 == 0 or i == n:
            result += "Go! "
    print(result)
