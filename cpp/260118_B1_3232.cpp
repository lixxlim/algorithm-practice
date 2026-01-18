/**
 * https://www.acmicpc.net/problem/3232
 */
#include <bits/stdc++.h>
using namespace std;

using i128 = __int128_t;

i128 parseBase(const string& s, int base) {
    i128 val = 0;
    for (char c : s) {
        int d = c - '0';
        if (d >= base) return -1;
        val = val * base + d;
    }
    return val;
}

int maxDigitIn(const string& s) {
    int mx = 0;
    for (char c : s) mx = max(mx, c - '0');
    return mx;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string p, q, r;
        cin >> p >> q >> r;

        int mx = max({maxDigitIn(p), maxDigitIn(q), maxDigitIn(r)});
        int startBase = max(2, mx + 1);

        int ans = 0;
        for (int B = startBase; B <= 16; B++) {
            i128 a = parseBase(p, B);
            i128 b = parseBase(q, B);
            i128 c = parseBase(r, B);
            if (a < 0 || b < 0 || c < 0) continue;
            if (a * b == c) {
                ans = B;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

