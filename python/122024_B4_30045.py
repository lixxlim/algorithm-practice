# https://www.acmicpc.net/problem/30045

print(sum([1 if ("01" in inp or "OI" in inp) else 0 for inp in [input() for _ in range(int(input()))]]))
