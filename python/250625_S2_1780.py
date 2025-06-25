# https://www.acmicpc.net/problem/1780
import sys
input = sys.stdin.readline

class PaperCounter:
    def __init__(self, paper):
        self.paper = paper
        self.n = len(paper)
        self.count = {-1: 0, 0: 0, 1: 0}

    def check_same(self, x, y, size):
        base = self.paper[x][y]
        for i in range(x, x + size):
            for j in range(y, y + size):
                if self.paper[i][j] != base:
                    return False
        return True

    def divide_and_count(self, x, y, size):
        if self.check_same(x, y, size):
            self.count[self.paper[x][y]] += 1
            return
        new_size = size // 3
        for dx in range(3):
            for dy in range(3):
                self.divide_and_count(x + dx * new_size, y + dy * new_size, new_size)

    def solve(self):
        self.divide_and_count(0, 0, self.n)
        return self.count[-1], self.count[0], self.count[1]

n = int(input())
paper = [list(map(int, input().split())) for _ in range(n)]

counter = PaperCounter(paper)
result = counter.solve()

print(result[0])
print(result[1])
print(result[2])

