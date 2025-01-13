# https://www.acmicpc.net/problem/30585

[ r, c ] = map(int, input().split())
num = "".join([ input() for _ in range(r) ])
print( min( len(num.replace("0", "")), len(num) - len(num.replace("0", "")) ))
