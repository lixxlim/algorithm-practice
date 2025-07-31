# https://www.acmicpc.net/problem/2975
while True:
    line = input()
    if line.strip() == "0 W 0":
        break

    parts = line.strip().split()
    balance = int(parts[0])
    transaction_type = parts[1]
    amount = int(parts[2])

    if transaction_type == 'D':
        balance += amount
        print(balance)
    elif transaction_type == 'W':
        if balance - amount < -200:
            print("Not allowed")
        else:
            balance -= amount
            print(balance)

