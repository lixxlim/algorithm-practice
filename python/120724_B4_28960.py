# https://www.acmicpc.net/problem/28960

h,l,a,b = map(int, input().split())
if h * 2 >= a and l >= b:
    print("YES")
elif h * 2 >= b and l >= a:
    print("YES")
else:
    print("NO")
