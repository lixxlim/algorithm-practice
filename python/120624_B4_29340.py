# https://www.acmicpc.net/problem/29340

a, b = [ input() for _ in range(2) ]
aws = [ c1 if c1 > c2 else c2 for c1, c2 in zip(a, b) ]
print("".join(aws))
