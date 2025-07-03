# https://www.acmicpc.net/problem/3758
# 00:33:38.1
import sys

class Team:
    def __init__(self, team_no, problem_cnt):
        self.team_no = team_no
        self.sheets = [ 0 for _ in range(problem_cnt) ]
        self.point = 0
        self.log_cnt = 0
        self.last_log_no = -1

    def solve(self, problem_no, new_point, log_no):
        self.log_cnt += 1
        self.last_log_no = log_no
        if self.sheets[j-1] < new_point:
            self.point += new_point - self.sheets[j-1]
            self.sheets[j-1] = new_point
        
if __name__ == "__main__":
    T = int(sys.stdin.readline().strip())
    for _ in range(T):
        n, k, t, m = map(int, sys.stdin.readline().strip().split())
        teams = [ Team(i, k) for i in range(1, n+1) ]
        for log_no in range(m):
            i, j, s = map(int, sys.stdin.readline().strip().split())
            teams[i-1].solve(j, s, log_no)
        teams.sort(key=lambda team: (-team.point, team.log_cnt, team.last_log_no))
        for rank, team in enumerate(teams):
            if team.team_no == t:
                print(rank+1)

