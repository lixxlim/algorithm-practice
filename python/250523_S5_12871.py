# https://www.acmicpc.net/problem/12871
def gcd(x, y):
    while y:
        x, y = y, x % y
    return x

def lcm(x, y):
    return (x * y) // gcd(x, y)

S, T = [ input() for _ in range(2) ]
len_s = len(S)
len_t = len(T)
l = lcm(len_s, len_t)
print( 1 if S * (l // len_s) == T * (l // len_t) else 0)
