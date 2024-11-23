# https://www.acmicpc.net/problem/3863

answer = []
while True:
    N,M = map(int,input().split())
    if N == 0 and M == 0:
        break
    
    arr = []
    for i in range(N):
        _,_,start,duration = map(int, input().split())
        arr.append([start, start+duration])

    for i in range(M):
        targetCall = 0
        start,duration = map(int, input().split())
        end = start + duration
        for j in range(N):
            if not (start >= arr[j][1] or end <= arr[j][0]):
                targetCall += 1
        answer.append(str(targetCall))
        answer.append("\n")

print(''.join(answer))
