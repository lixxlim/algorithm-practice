# https://www.acmicpc.net/problem/5635

class Person:
    def __init__(self, name, year, month, day):
        self.name = name
        self.year = int(year)
        self.month = int(month)
        self.day = int(day)
        self.birthdate = int(f"{self.year}{self.month:02}{self.day:02}")

n = int(input())
group = [ Person(n, y, m, d) for n, d, m, y in [ input().split() for _ in range(n) ]]
group.sort(key=lambda person: person.birthdate)

print(group[n-1].name)
print(group[0].name)
