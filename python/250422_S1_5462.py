# https://www.acmicpc.net/problem/5462
import sys

input = sys.stdin.readline

n, t, p = map(int, input().split())
solved_data = []
for _ in range(n):
    solved_data.append(list(map(int, input().split())))

problem_scores = [0] * t
for j in range(t):
    unsolved_count = 0
    for i in range(n):
        if solved_data[i][j] == 0:
            unsolved_count += 1
    problem_scores[j] = unsolved_count

participants = []
for i in range(n):
    user_id = i + 1
    current_solved = solved_data[i]
    
    total_score = 0
    solved_count = 0
    for j in range(t):
        if current_solved[j] == 1:
            total_score += problem_scores[j]
            solved_count += 1
            
    participants.append({'id': user_id, 'score': total_score, 'solved_count': solved_count})

philip_score = 0
for participant in participants:
    if participant['id'] == p:
        philip_score = participant['score']
        break

participants.sort(key=lambda x: (-x['score'], -x['solved_count'], x['id']))

philip_rank = 0
for i in range(n):
    if participants[i]['id'] == p:
        philip_rank = i + 1
        break

print(f"{philip_score} {philip_rank}")
