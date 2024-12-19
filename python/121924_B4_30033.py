# https://www.acmicpc.net/problem/30033

n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

print(sum([1 if b[i] >= a[i] else 0 for i in range(n)]))
