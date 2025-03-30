# https://www.acmicpc.net/problem/33612
year = 2024
month = 1
n = int(input()) * 7
year += n // 12
month += n % 12
print(year, month)
