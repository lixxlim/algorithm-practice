# https://www.acmicpc.net/problem/9507
n = int(input())
kkong = [ 1 ] * 68
kkong[ 2 ] = 2
kkong[ 3 ] = 4
for i in range(4, 68):
    kkong[ i ] = kkong[ i - 1 ] + kkong[ i - 2 ] + kkong[ i - 3 ] + kkong[ i - 4 ]
for _ in range(n):
    m = int(input())
    print(kkong[m])
