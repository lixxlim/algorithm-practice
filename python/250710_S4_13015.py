# https://www.acmicpc.net/problem/13015
N = int(input())

print(("*" * N) + (" " * (N-2)) + " " + (" " * (N-2)) + ("*" * N))

for i in range(1, N - 1):
    left_space = ' ' * i
    mid_space = ' ' * (N - 2)
    between_space = ' ' * (2 * (N - i - 2) + 1)
    line = (
        left_space + '*' + mid_space + '*' +
        between_space +
        '*' + mid_space + '*'
    )
    print(line)

center_space = ' ' * (N - 1)
mid_space = ' ' * (N - 2)
print(center_space + '*' + mid_space + '*' + mid_space + '*')

for i in range(N - 2, 0, -1):
    left_space = ' ' * i
    mid_space = ' ' * (N - 2)
    between_space = ' ' * (2 * (N - i - 2) + 1)
    line = (
        left_space + '*' + mid_space + '*' +
        between_space +
        '*' + mid_space + '*'
    )
    print(line)

print(("*" * N) + (" " * (N-2)) + " " + (" " * (N-2)) + ("*" * N))

