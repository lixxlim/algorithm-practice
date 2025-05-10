# https://www.acmicpc.net/problem/25757
import sys
game_map = {"Y": 1, "F": 2, "O": 3}

if __name__ == "__main__":
    n, g = sys.stdin.readline().strip().split()
    users = set([ sys.stdin.readline().strip() for _ in range(int(n)) ])
    print(len(users) // game_map.get(g))
