# https://www.acmicpc.net/problem/2863
def calculate_value(matrix):
    A, B = matrix[0]
    C, D = matrix[1]
    return A / C + B / D

def rotate_matrix(matrix):
    return [
        [matrix[1][0], matrix[0][0]],
        [matrix[1][1], matrix[0][1]]
    ]

A, B = map(int, input().split())
C, D = map(int, input().split())
matrix = [[A, B], [C, D]]
max_value = -1
best_rotation = 0
for i in range(4):
    value = calculate_value(matrix)
    if value > max_value:
        max_value = value
        best_rotation = i
    matrix = rotate_matrix(matrix)
print(best_rotation)

