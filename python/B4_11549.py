t = int(input())
taster = map(int, input().split())
total = sum(1 if tasting == t else 0 for tasting in taster)
print(total)