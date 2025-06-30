# https://www.acmicpc.net/problem/2799
def count_blind_types(M, N, apartment):
    result = [0] * 5
    for i in range(M):
        for j in range(N):
            blind_rows = [apartment[5 * i + r + 1][5 * j + 1 : 5 * j + 5] for r in range(4)]
            closed_rows = sum(1 for row in blind_rows if row == '****')
            result[closed_rows] += 1
    return result

M, N = map(int, input().split())
apartment = [input().strip() for _ in range(5 * M + 1)]
result = count_blind_types(M, N, apartment)
print(' '.join(map(str, result)))

