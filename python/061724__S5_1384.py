# https://www.acmicpc.net/problem/1384

if __name__ == "__main__":
    # 변수 선언
    groupNo = 0
    # 0 입력전까지 반복
    while N := int(input()) :
        # 그룹 시작
        result = []
        child = []
        groupNo += 1
        result.append(f"Group {groupNo}")
        # 입력 받기
        for i in range(N):
            name, *memo = input().split()
            child.append((name, memo))
        # 나쁜말 확인
        nesty = False
        for i, v in enumerate(child):
            for j, m in enumerate(v[1]):
                if m == 'N':
                    nesty = True
                    target = (abs(j - (N - 1)) + i) % N
                    result.append(f"{child[target][0]} was nasty about {v[0]}")
        if nesty == False :
            result.append("Nobody was nasty")
        # 나쁜말한 녀석 출력
        for r in result :
            print(r)
        print("")

