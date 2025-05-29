# https://www.acmicpc.net/problem/11637
def get_winner(persons):
    winner_idx = 0
    winner_value = 0
    same = False
    for i, v in enumerate(persons):
        if winner_value > v :
            continue
        elif winner_value < v :
            winner_value = v
            winner_idx = i 
            same = False
        else:
            same = True
    if same:
        print("no winner")
    else:
        if winner_value > sum(persons) // 2:
            print("majority winner", winner_idx+1)
        else:
            print("minority winner", winner_idx+1)


for _ in range(int(input())):
    persons = [ int(input()) for _ in range(int(input())) ]
    get_winner(persons)
