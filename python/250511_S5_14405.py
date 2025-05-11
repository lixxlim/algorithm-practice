# https://www.acmicpc.net/problem/14405
import re
pattern = re.compile('^(pi|ka|chu)+$')

if __name__ == "__main__":
    S = input()
    match_result = "YES" if pattern.fullmatch(S) else "NO"
    print(match_result)
