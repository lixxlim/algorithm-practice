# https://www.acmicpc.net/problem/17598
vote = { 
    "Lion" : 0,
    "Tiger" : 0
}

while True:
    try:
        inp = input()
        if inp in vote:
            vote[inp] += 1
    except EOFError:
        break

print(max(vote, key=vote.get))
