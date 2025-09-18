/**
 * https://www.acmicpc.net/problem/1834
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    if (!(cin >> N)) return 0;
    
    __int128 a = N;
    __int128 result = a * (a - 1) * (a + 1) / 2;
    
    long long sign = 1;
    if (result < 0) { sign = -1; result = -result; }
    string out;
    if (result == 0) out = "0";
    else {
        while (result > 0) {
            int digit = int(result % 10);
            out.push_back('0' + digit);
            result /= 10;
        }
        if (sign < 0) out.push_back('-');
        reverse(out.begin(), out.end());
    }
    cout << out << '\n';
    return 0;
}

