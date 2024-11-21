# https://www.acmicpc.net/problem/30402

image = [input() for i in range(15)]

if any('w' in p for p in image):
    print("chunbae")
elif any('b' in p for p in image):
    print("nabi")
elif any('g' in p for p in image):
    print("yeongcheol")
