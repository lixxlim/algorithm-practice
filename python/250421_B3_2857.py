# https://www.acmicpc.net/problem/2857
lst = []
for i in range(5):
    inp = input()
    if "FBI" in inp:
        lst.append(str(i+1))
if len(lst) == 0:
    print("HE GOT AWAY!")
else:
    print(" ".join(lst))

