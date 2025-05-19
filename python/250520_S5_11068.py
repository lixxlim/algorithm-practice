# https://www.acmicpc.net/problem/11068

def to_base(n, base):
    prepared_char_set = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/"
    char_set = prepared_char_set[:base]
    ret = ""
    while n > 0:
        remain = n % base
        ret = char_set[remain] + ret
        n //= base
    return ret

if __name__ == "__main__":
    n = int(input())
    result = []
    for _ in range(n):
        T = int(input())
        ret = "0"
        for base in range(2, 65):
            T_str = to_base(T, base)
            if T_str == T_str[::-1]:
                ret = "1"
                break
        result.append(ret)
    print("\n".join(result))

