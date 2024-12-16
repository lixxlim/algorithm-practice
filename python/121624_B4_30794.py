# https://www.acmicpc.net/problem/30794

judge_dic = {
        "miss": lambda lv: print(0),
        "bad": lambda lv: print(lv * 200),
        "cool": lambda lv: print(lv * 400),
        "great": lambda lv: print(lv * 600),
        "perfect": lambda lv: print(lv * 1000),
}

lv, judge = input().split()
judge_dic[judge](int(lv))
