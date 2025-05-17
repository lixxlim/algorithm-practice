# https://www.acmicpc.net/problem/15312
import sys
sys.setrecursionlimit(5000)

rate = {
    "A": 3, "B": 2, "C": 1, "D": 2, "E": 3, "F": 3, "G": 2, "H": 3, "I": 3, 
    "J": 2, "K": 2, "L": 1, "M": 2, "N": 2, "O": 1, "P": 2, "Q": 2, "R": 2,
    "S": 1, "T": 2, "U": 1, "V": 1, "W": 1, "X": 2, "Y": 2, "Z": 1
}

def get_num_list(st):
    return list([ rate[c] for c in st ])

def combine_num_list(a_list, b_list):
    ret = []
    if len(a_list) != len(b_list):
        raise ValueError("Size is not matched with A and B")
    for i in range(len(a_list)):
        ret.append(a_list[i])
        ret.append(b_list[i])
    return ret

def name_compatibility(lst):
    ret = []
    size = len(lst)
    if size <= 2:
        return f"{lst[0]}{lst[1]}"
    for i in range(0, size-1):
        ret.append((lst[i] + lst[i+1]) % 10)
    return name_compatibility(ret)

if __name__ == "__main__":
    A = input()
    B = input()

    a_num = get_num_list(A)
    b_num = get_num_list(B)

    c_list = combine_num_list(a_num, b_num)

    result = name_compatibility(c_list)

    print(result)
