# https://www.acmicpc.net/problem/5555
word = input()
print(sum(word in input() * 2 for _ in range(int(input()))))
