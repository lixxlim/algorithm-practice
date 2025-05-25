# https://www.acmicpc.net/problem/2547
import sys

def main():
    input = sys.stdin.read
    data = input().strip().split('\n')

    t = int(data[0]) 
    idx = 1 

    results = []
    for _ in range(t):
        while data[idx].strip() == "":
            idx += 1 

        n = int(data[idx])
        idx += 1

        total_candies = 0
        for _ in range(n):
            total_candies += int(data[idx])
            idx += 1

        if total_candies % n == 0:
            results.append("YES")
        else:
            results.append("NO")

    print("\n".join(results))

if __name__ == "__main__":
    main()

