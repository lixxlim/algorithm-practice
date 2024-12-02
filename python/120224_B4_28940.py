# https://www.acmicpc.net/problem/28940

w, h = map(int, input().split())
n, a, b = map(int, input().split())

totalPages = -1
if(w >= a and h >= b): 
    char_for_wide_of_one_page = (w // a)
    char_for_height_of_one_page = (h // b)
    sum_of_char_in_one_page = char_for_wide_of_one_page * char_for_height_of_one_page
    totalPages = ((n - 1) // sum_of_char_in_one_page) + 1

print(totalPages)
