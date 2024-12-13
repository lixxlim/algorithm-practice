# https://www.acmicpc.net/problem/4335

def too_high(n):
    for i in range(n, 10):
        t[i] = False

def too_low(n):
    for i in range(n+1):
        t[i] = False

def right_on(n):
    if t[n]:
        print("Stan may be honest")
    else:
        print("Stan is dishonest")

func_map = {
    "too high": too_high,
    "too low": too_low,
    "right on": right_on
}

t = [True] * 10
while True:
    n = int(input())
    if n == 0:
        break;
    inp = input()
    func_map[inp](n-1)
    if inp == "right on":
        t = [True] * 10

