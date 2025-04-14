# https://www.acmicpc.net/problem/5648
import sys

input_tokens = sys.stdin.read().split()

string_numbers = input_tokens[1:]

reversed_numbers = []

for s_num in string_numbers:
    reversed_s = s_num[::-1]
    reversed_num = int(reversed_s)
    reversed_numbers.append(reversed_num)

reversed_numbers.sort()

for num in reversed_numbers:
    print(num)
