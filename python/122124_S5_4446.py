# https://www.acmicpc.net/problem/4446
import sys

mo = [ 'a', 'i', 'y', 'e', 'o', 'u' ]
MO = [ 'A', 'I', 'Y', 'E', 'O', 'U' ]
ja = [ 'b', 'k', 'x', 'z', 'n', 'h', 'd', 'c', 'w', 'g', 'p', 'v', 'j', 'q', 't', 's', 'r', 'l', 'm', 'f' ]
JA = [ 'B', 'K', 'X', 'Z', 'N', 'H', 'D', 'C', 'W', 'G', 'P', 'V', 'J', 'Q', 'T', 'S', 'R', 'L', 'M', 'F' ]

inp = sys.stdin.read()
for ch in inp:
    if ch in mo :
        print(mo[(mo.index(ch) + 3) % 6], end='')
    if ch in MO :
        print(MO[(MO.index(ch) + 3) % 6], end='')
    if ch in ja :
        print(ja[(ja.index(ch) + 10) % 20], end='')
    if ch in JA :
        print(JA[(JA.index(ch) + 10) % 20], end='')
    if ch == ' ' :
        print(' ', end='')
    if ch == '.' :
        print('.', end='')
    if ch == '\n' :
        print('\n', end='')
