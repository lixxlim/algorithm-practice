# https://www.acmicpc.net/problem/26530

# n = int(input())
# for _ in range(n) :
#     sum = 0.0
#     m = int(input())
#     for _ in range(m) :
#         _, price, num = input().split()
#         sum += float(price) * float(num)
#     print(f"${sum:0.2f}")

list = [sum(float(price) * float(num) for _, price, num in [input().split() for _ in range(int(input()))]) for _ in range(int(input()))]
[print(f"${sum:.2f}") for sum in list] 