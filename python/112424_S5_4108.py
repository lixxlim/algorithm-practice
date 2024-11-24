# https://www.acmicpc.net/problem/4108

dir = [(-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1)]
while True:
    R, C = map(int, input().split())
    if R == C == 0: break
    case_map = [ input().strip() for _ in range(R) ]
    result_map = [ [0] * C for _ in range(R) ]
    
    for i in range(R):
        for j in range(C):
            if case_map[i][j] == "*":
                for xi, xj in dir:
                    if 0 <= i + xi < R and 0 <= j + xj < C:
                        result_map[i + xi][j + xj] += 1

    for row in range(R):
        for col in range(C):
            if case_map[row][col] == "*":
                print("*", end = '')
            else:
                print(result_map[row][col], end = '')
        print()
