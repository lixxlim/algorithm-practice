# https://www.acmicpc.net/problem/30468

STR, DEX, INT, LUK, N = map(int, input().split())
print(max(0, N * 4 - (STR + DEX + INT + LUK)))
