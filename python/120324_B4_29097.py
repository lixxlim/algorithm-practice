# https://www.acmicpc.net/problem/29097

n, m, k, a, b, c = map(int, input().split())

king = ["Joffrey", "Robb", "Stannis"]
army = [n * a, m * b, k * c]

max_army = max(army)
result = [ king[i] for i in range(3) if army[i] == max_army ]

print(" ".join(result))

