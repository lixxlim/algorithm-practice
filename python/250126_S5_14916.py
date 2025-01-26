# https://www.acmicpc.net/problem/14916
n = int(input())
if n == 1 or n == 3 :
    print('-1')
else:
    cnt5 = n // 5
    cnt2 = (n % 5) // 2
    if (n % 5) % 2 == 1 :
        print(cnt5 + cnt2 + 2)
    else :
        print(cnt5 + cnt2)
