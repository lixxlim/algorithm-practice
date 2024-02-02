for _ in range(3):
    h1, m1, s1, h2, m2, s2 = map(int, input().split())
    time = (h2 * 60 * 60) + (m2 * 60) + s2 - (h1 * 60 * 60) - (m1 * 60) - s1
    second = time % 60
    time //= 60
    minute = time % 60
    time //= 60
    hour = time;
    print(hour, minute, second)
