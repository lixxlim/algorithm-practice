# https://www.acmicpc.net/problem/6763

# ==========================================================
# Clsss 드라이버
# ==========================================================
class Driver:
    def __init__(self, speed):
        self.speed = speed

# ==========================================================
# Clsss 레이더
# ==========================================================
class Radar:
    def __init__(self, limit):
        self.limit = limit

    def check_speed(self, driver):
        isOk = driver.speed <= self.limit
        fine = self.get_fine(driver.speed)
        return (isOk, fine)

    def get_fine(self, speed):
        if(speed > self.limit + 30):
            return 500
        elif(speed > self.limit + 20):
            return 270
        elif(speed > self.limit):
            return 100
        elif(speed <= self.limit):
            return 0

# ==========================================================
# Entry Point
# ==========================================================
if __name__ == "__main__":
    limit = int(input())
    speed = int(input())
    driver = Driver(speed)
    radar = Radar(limit)

    res = radar.check_speed(driver)
    if(res[0]):
        print("Congratulations, you are within the speed limit!")
    else:
        print(f"You are speeding and your fine is ${res[1]}.")
