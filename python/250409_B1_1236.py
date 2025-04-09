# https://www.acmicpc.net/problem/1236
n, m = map(int, input().split())
castle = [ list(input()) for _ in range(n) ]

rows_needed = 0
cols_needed = 0

for i in range(n):
    if 'X' not in castle[i]:
        rows_needed += 1

for j in range(m):
    col_has_guard = False
    for i in range(n):
        if castle[i][j] == 'X':
            col_has_guard = True
            break
    if not col_has_guard:
        cols_needed += 1

print(max(rows_needed, cols_needed))
