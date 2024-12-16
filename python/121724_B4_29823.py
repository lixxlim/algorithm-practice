# https://www.acmicpc.net/problem/29823

x, y = 0, 0

def move_n(): 
    global y 
    y += 1 

def move_s(): 
    global y 
    y -= 1 

def move_e(): 
    global x 
    x += 1 

def move_w(): 
    global x 
    x -=1

move_dic = {
    "N": move_n,
    "S": move_s,
    "E": move_e,
    "W": move_w,
}

n = int(input())
inp = input()
for i in inp:
    move_dic[i]()

print(abs(x) + abs(y))
