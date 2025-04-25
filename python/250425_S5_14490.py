# https://www.acmicpc.net/problem/14490
import math
n, m = map(int, input().split(":"))
gcd = math.gcd(n, m)
print(n//gcd, ":", m//gcd, sep="")

