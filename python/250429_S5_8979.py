# https://www.acmicpc.net/problem/8979
#class Country:
#    def __init__(self, no, gold, silver, bronze):
#        self.no = no
#        self.point = (gold * 100) + (silver * 10) + bronze
#
#n, k = map(int, input().split())
#countries = [Country(no, g, s, b) for no, g, s, b in [map(int, input().split()) for _ in range(n)]]
#target = countries[0]
#for i in range(len(countries)):
#    if countries[i].no == k:
#        target = countries[i]
#        break
#cnt = 1
#for i in range(len(countries)):
#    if countries[i].no == k:
#        continue
#    if countries[i].point > target.point:
#        cnt += 1
#print(cnt)
N, K = map(int, input().split())

medals = [list(map(int, input().split())) for _ in range(N)]
    
medals.sort(key = lambda x : (x[1], x[2], x[3]), reverse=True)

idx = [medals[i][0] for i in range(N)].index(K)

for i in range(N):
    if medals[idx][1:] == medals[i][1:]:
        print(i+1)
        break
