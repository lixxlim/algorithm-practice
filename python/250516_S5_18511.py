# https://www.acmicpc.net/problem/18511
n_str, k_count_str = input().split()
N = int(n_str)
k_elements = list(map(int, input().split()))

ans = 0

def find_max_number_recursive(current_number):
    global ans

    if current_number > N:
        return

    if current_number > 0:
        ans = max(ans, current_number)

    for k_digit in k_elements:
        next_number = current_number * 10 + k_digit
        find_max_number_recursive(next_number)

find_max_number_recursive(0)

print(ans)
