# https://www.acmicpc.net/problem/20546
from enum import Enum

class Deal(Enum):
    BUY = 0
    SELL = 1
    WAIT = 2

class Stratege(Enum):
    BNP = 0
    TIMING = 1

class Person:
    def __init__(self, stratege, money):
        self.stratege = stratege
        self.money = money
        self.stock = 0
        self.before_price = 0
        self.move_history = 0

    def do_stratege(self, price):
        # 행동 결정
        deal = Deal.WAIT
        if self.stratege == Stratege.BNP:
            # BNP는 항상 구매
            deal = Deal.BUY
        elif self.stratege == Stratege.TIMING:
            # 가격변동 기록
            if self.before_price < price:
                if self.move_history < 0:
                    self.move_history = 1
                else:
                    self.move_history += 1
            elif self.before_price > price:
                if self.move_history > 0:
                    self.move_history = -1
                else:
                    self.move_history -= 1
            else:
                self.move_history = 0
            # 가격변동에 따른 행동 결정
            if self.move_history >= 3:
                if self.stock > 0:
                    deal = Deal.SELL
            elif self.move_history <= -3:
                if self.money >= price:
                    deal = Deal.BUY
        # 결정된 행동 실행
        if deal == Deal.BUY:
            self.stock += self.money // price
            self.money = self.money % price
        elif deal == Deal.SELL:
            self.money += self.stock * price
            self.stock = 0
        # 전날 가격 기록
        self.before_price = price

    def get_result(self):
        self.money += self.before_price * self.stock
        self.stock = 0
        return self.money

if __name__ == "__main__":
    money = int(input())
    jun_hyon = Person(Stratege.BNP, money)
    sung_min = Person(Stratege.TIMING, money)
    machine_duck = map(int, input().split())
    for price in machine_duck:
        jun_hyon.do_stratege(price)
        sung_min.do_stratege(price)
    if jun_hyon.get_result() > sung_min.get_result():
        print(jun_hyon.stratege.name)
    elif jun_hyon.get_result() < sung_min.get_result():
        print(sung_min.stratege.name)
    else:
        print("SAMESAME")
