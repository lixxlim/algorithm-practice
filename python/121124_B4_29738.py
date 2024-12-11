# https://www.acmicpc.net/problem/29738

t = int(input())
res = []
for i in range(t):
    ret = "Case #" + str(i+1) +": "
    n = int(input())
    if n <= 25:
        ret += "World Finals" 
    elif n <= 1000:
        ret += "Round 3"
    elif n <= 4500:
        ret += "Round 2"
    else:
        ret += "Round 1"
    res.append(ret)
print("\n".join(res))
