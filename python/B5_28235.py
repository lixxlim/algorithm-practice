# https://www.acmicpc.net/problem/28235
dic = {
    "SONGDO" : "HIGHSCHOOL",
    "CODE" : "MASTER",
    "2023" : "0611",
    "ALGORITHM" : "CONTEST"
}

if __name__ == "__main__" :
    say = input()
    print(dic.get(say))
