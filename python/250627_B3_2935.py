# https://www.acmicpc.net/problem/2935
A = input().strip()
op = input().strip()
B = input().strip()

num1 = int(A)
num2 = int(B)

if op == '+':
    result = num1 + num2
elif op == '*':
    result = num1 * num2

print(result)

