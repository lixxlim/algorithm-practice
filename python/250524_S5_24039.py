# https://www.acmicpc.net/problem/24039
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

def generate_primes(limit):
    primes = []
    for i in range(2, limit):
        if is_prime(i):
            primes.append(i)
    return primes

def find_next_special_number(N):
    primes = generate_primes(1000)
    for i in range(len(primes) - 1):
        product = primes[i] * primes[i + 1]
        if product > N:
            return product

N = int(input())
print(find_next_special_number(N))

