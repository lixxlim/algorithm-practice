# https://www.acmicpc.net/problem/11257

def check_pass(_total, _s, _m, _t):
    return (_total >= PASS_LINE_FOR_TOTAL
            and _s >= STRATEGY_RATE * PASS_RATE_FOR_EACH
            and _m >= MANAGEMENT_RATE * PASS_RATE_FOR_EACH
            and _t >= TECHNOLOGY_RATE * PASS_RATE_FOR_EACH)


if __name__ == "__main__":

    PASS_LINE_FOR_TOTAL = 55
    PASS_RATE_FOR_EACH = 0.3
    STRATEGY_RATE = 35
    MANAGEMENT_RATE = 25
    TECHNOLOGY_RATE = 40

    n = int(input())
    for _ in range(n):
        student = input().split()
        total = sum(int(score) for score in student[1:])
        pass_or_fail = "PASS" if check_pass(total, int(student[1]), int(student[2]), int(student[3])) else "FAIL"
        print(student[0], total, pass_or_fail)
