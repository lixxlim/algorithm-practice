# https://www.acmicpc.net/problem/9711
def get_pibo(n):
    fib = [0] * (n + 1)
    fib[1] = 1
    for i in range(2, n + 1):
        fib[i] = fib[i - 1] + fib[i - 2]
    return fib

if __name__ == "__main__":
    N = int(input())
    pibo = get_pibo(10000)
    for i in range(1, N+1):
        P, Q = map(int, input().split())
        print(f"Case #{i}: {pibo[P]%Q}")
