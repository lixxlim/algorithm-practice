# https://www.acmicpc.net/problem/7595

if __name__ == "__main__":
    n = int(input())
    while (n):
        for i in range(n):
            print("*" * (i+1))
        n = int(input())
