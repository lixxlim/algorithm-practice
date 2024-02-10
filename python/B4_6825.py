class Human:
    def __init__(self, weight, height):
        self.weight = weight
        self.height = height
        self.BMI = None

class BMIChecker:
    @staticmethod
    def setBMI(human):
        human.BMI = human.weight / (human.height * human.height)

    @staticmethod
    def getBMIComment(human):
        if human.BMI is None:
            BMIChecker.setBMI(human)
        if human.BMI > 25.0:
            return "Overweight"
        elif human.BMI >= 18.5:
            return "Normal weight"
        else:
            return "Underweight"

if __name__ == "__main__":
    weight = float(input())
    height = float(input())
    human = Human(weight, height)
    print(BMIChecker.getBMIComment(human))
        
