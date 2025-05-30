# https://www.acmicpc.net/problem/3053
import math

R = int(input())
euclidean_area = math.pi * R * R
taxi_area = 2 * R * R
print(f"{euclidean_area:.6f}")
print(f"{taxi_area:.6f}")
