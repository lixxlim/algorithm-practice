# https://www.acmicpc.net/problem/25703
n = int(input())
var = "a"
val = "ptr"
print(f"int {var};")
for i in range(1, n+1):
    ptr = "*" * i
    print(f"int {ptr}{val} = &{var};")
    var = val
    val = f"ptr{i+1}"
