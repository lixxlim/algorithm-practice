# https://www.acmicpc.net/problem/6550
while True:
    try:
        inp = input().strip()
        if inp == '':
            break
        s, t = inp.split()
        s_size = len(s)
        t_size = len(t)
        pointer = 0
        ret = ""
        finished = 0
        for i in range(s_size):
            target = s[i]
            for j in range(pointer, t_size):
                if target == t[j]:
                    if i == s_size - 1:
                        ret = "Yes"
                        break
                    if j != t_size - 1:
                        pointer = j + 1
                        break
                if j == t_size - 1:
                    ret = "No"
            if ret == "Yes" or ret == "No":
                break
        print(ret)
    except EOFError:
        break
