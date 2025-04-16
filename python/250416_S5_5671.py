import sys

while True:
    line = sys.stdin.readline().strip()
    if line == '':
        break
    n, m = map(int, line.split())
    cnt = 0
    for num in range(n, m+1):
        num_set = set()
        runs = list(str(num))
        for i in runs:
            num_set.add(i)
        if len(num_set) == len(runs):
            cnt += 1
    print(cnt)
