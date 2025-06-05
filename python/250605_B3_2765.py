# https://www.acmicpc.net/problem/2765
import sys

def solve():
    PI = 3.1415927
    INCHES_PER_MILE = 5280 * 12 
    SECONDS_PER_HOUR = 60 * 60 
    trip_number = 1
    while True:
        try:
            line = sys.stdin.readline().split()
            if not line:
                break
            diameter_inch = float(line[0])
            revolutions = int(line[1])
            time_seconds = float(line[2])
            if revolutions == 0:
                break
            circumference_inch = PI * diameter_inch
            total_distance_inch = circumference_inch * revolutions
            total_distance_miles = total_distance_inch / INCHES_PER_MILE
            time_hours = time_seconds / SECONDS_PER_HOUR
            average_speed_mph = total_distance_miles / time_hours
            print(f"Trip #{trip_number}: {total_distance_miles:.2f} {average_speed_mph:.2f}")
            trip_number += 1
        except EOFError:
            break
        except ValueError:
            break

if __name__ == "__main__":
    solve()
