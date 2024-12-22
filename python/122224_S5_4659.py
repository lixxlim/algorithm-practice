# https://www.acmicpc.net/problem/4659

mo = [ 'a', 'e', 'i', 'o', 'u' ]

def checkPassword(inp):
    acceptable = True
    if len(set(list(inp)) & set(mo)) == 0:
        acceptable = False
    for i in range(len(inp)-2):
        if inp[i] in mo and inp[i+1] in mo and inp[i+2] in mo:
            acceptable = False
        if not inp[i] in mo and not inp[i+1] in mo and not inp[i+2] in mo:
            acceptable = False
    for i in range(len(inp)-1):
        if (inp[i] == inp[i+1]) and (inp[i] != 'e') and (inp[i] != 'o'):
            acceptable = False
    return f"<{inp}> is acceptable." if acceptable else f"<{inp}> is not acceptable."

ret = []
while True:
    inp = input()
    if inp == "end": 
        break
    ret.append(checkPassword(inp))

print("\n".join(ret))
