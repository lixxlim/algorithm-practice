/**
 * https://www.acmicpc.net/problem/3412
 */
#include <bits/stdc++.h>
using namespace std;

struct FastScanner {
    static inline int readInt() {
        int c = getchar_unlocked();
        while (c <= ' ' && c != EOF) c = getchar_unlocked();
        int sign = 1;
        if (c == '-') {
            sign = -1;
            c = getchar_unlocked();
        }
        int x = 0;
        while (c > ' ') {
            x = x * 10 + (c - '0');
            c = getchar_unlocked();
        }
        return x * sign;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = FastScanner::readInt();
    while (T--) {
        int n = FastScanner::readInt();
        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            int x = FastScanner::readInt();
            int y = FastScanner::readInt();
            int d2 = x * x + y * y;

            if (d2 <= 400) ans += 10;
            else if (d2 <= 1600) ans += 9;
            else if (d2 <= 3600) ans += 8;
            else if (d2 <= 6400) ans += 7;
            else if (d2 <= 10000) ans += 6;
            else if (d2 <= 14400) ans += 5;
            else if (d2 <= 19600) ans += 4;
            else if (d2 <= 25600) ans += 3;
            else if (d2 <= 32400) ans += 2;
            else if (d2 <= 40000) ans += 1;
        }
        cout << ans << "\n";
    }
    return 0;
}

