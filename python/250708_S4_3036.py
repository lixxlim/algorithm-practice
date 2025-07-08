# https://www.acmicpc.net/problem/3036

def get_gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

if __name__ == "__main__":
    n = int(input())
    ns = list(map(int, input().split()))
    first_value = ns[0]
    ret = []

    for i in range(1, n):
        gcd = get_gcd(first_value, ns[i])
        numerator = first_value // gcd
        denominator = ns[i] // gcd
        ret.append(f"{numerator}/{denominator}")

    print("\n".join(ret))

