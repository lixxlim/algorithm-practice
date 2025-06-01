# https://www.acmicpc.net/problem/20125
from enum import Enum

class Target(Enum):
    HEAD = "HEAD"
    HEART = "HEART"
    ARM_L = "ARM_L"
    ARM_R = "ARM_R"
    WAIST = "WAIST"
    LEG = "LEG"

class Cookey:
    def __init__(self):
        self.head = (0, 0)
        self.heart = (0, 0)
        sharft = 0
        self.arm_left = 0
        self.arm_right = 0
        self.waist = 0
        self.leg_left = 0
        self.leg_right = 0

    def to_print(self):
        print(self.heart[0] + 1, self.heart[1] + 1)
        print(self.arm_left, self.arm_right, self.waist, self.leg_left, self.leg_right)

def scan(cookey_map):
    target = Target.HEAD
    cookey_obj = Cookey()
    for r in range(len(cookey_map)):
        for c in range(len(cookey_map[r])):
            if target == Target.HEAD and cookey_map[r][c] == "*":
                cookey_obj.head = ( r, c )
                cookey_obj.heart = ( r + 1, c )
                cookey_obj.sharft =  c
                target = Target.ARM_L
                continue
            if target == Target.ARM_L:
                if r == cookey_obj.heart[0] and c == cookey_obj.heart[1]:
                    target = Target.ARM_R
                    continue
                if cookey_map[r][c] == "*":
                    cookey_obj.arm_left += 1
                    continue
            if target == Target.ARM_R:
                if cookey_map[r][c] == "*":
                    cookey_obj.arm_right += 1
                    continue
                if r != cookey_obj.heart[0]:
                    target = Target.WAIST
            if target == Target.WAIST:
                if cookey_map[r][c] == "*" and c == cookey_obj.sharft - 1:
                    cookey_obj.leg_left += 1
                    target = Target.LEG
                    continue
                if cookey_map[r][c] == "*" and c == cookey_obj.sharft:
                    cookey_obj.waist += 1
                    continue
                if cookey_map[r][c] == "*" and c == cookey_obj.sharft + 1:
                    cookey_obj.leg_right += 1
                    target = Target.LEG
                    continue
            if target == Target.LEG:
                if cookey_map[r][c] == "*" and c == cookey_obj.sharft - 1:
                    cookey_obj.leg_left += 1
                    continue
                if cookey_map[r][c] == "*" and c == cookey_obj.sharft + 1:
                    cookey_obj.leg_right += 1
                    continue
    cookey_obj.to_print()

if __name__ == "__main__":
    n = int(input())
    cookey = [ input() for _ in range(n) ]
    scan(cookey)
