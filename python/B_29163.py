n = int(input())
chk = sum(val & 1 for val in map(int, input().split()))
print("Happy" if n-chk > chk else "Sad")
