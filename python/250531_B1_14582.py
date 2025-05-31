# https://www.acmicpc.net/problem/14582

geminis = list(map(int, input().split()))
gulibus = list(map(int, input().split()))
geminis_point = 0
gulibus_point = 0
win_geminis = False
for i in range(len(geminis)):
    geminis_point += geminis[i]
    if geminis_point > gulibus_point :
        win_geminis = True
    gulibus_point += gulibus[i]
print( "Yes" if win_geminis else "No" )
