# https://www.acmicpc.net/problem/10431

def back_walk(lst):
    walk = 0
    line = []

    if lst:
        line.append(lst[0])

    for i in range(1, len(lst)):
        current_height = lst[i]
        inserted_position = -1

        for j in range(len(line)):
            if line[j] > current_height:
                inserted_position = j
                break

        if inserted_position != -1:
            walk += len(line) - inserted_position
            line.insert(inserted_position, current_height)
        else:
            line.append(current_height)

    return walk

P = int(input())
for _ in range(P):
    test_case_data = list(map(int, input().strip().split()))
    test_case_number = test_case_data[0]
    student_heights = test_case_data[1:]

    total_walk_steps = back_walk(student_heights)

    print(test_case_number, total_walk_steps)
