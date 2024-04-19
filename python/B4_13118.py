people = list(map(int, input().split()))
apple = list(map(int, input().split()))
try:
    index = people.index(apple[0]) + 1
except ValueError:
    index = 0
print(index)
