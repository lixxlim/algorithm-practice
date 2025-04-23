# https://www.acmicpc.net/problem/8892

def isPalindrome(a, b):
    word = a + b
    return word == word[::-1]

n = int(input())
for _ in range(n):
    m = int(input())
    words = [ input() for _ in range(m) ]
    ret = "0"
    for i in range(m):
        for j in range(m):
            if i == j:
                continue
            if isPalindrome(words[i], words[j]):
                ret = words[i] + words[j]
    print(ret)
