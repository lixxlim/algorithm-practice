/**
 * https://www.acmicpc.net/problem/3553
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, d;
    if (!(cin >> n >> d)) return 0;

    if (n == 1) {
        for (int c = 1; c <= 9; ++c) {
            if (c % d == 0) {
                cout << c << '\n';
                return 0;
            }
        }
        cout << "No solution\n";
        return 0;
    }

    long long r = 1 % d;
    for (long long i = 0; i < n - 1; ++i) r = (r * 10) % d;

    auto pow10 = [&](int k)->long long{
        long long p = 1;
        for (int i = 0; i < k; ++i) p *= 10;
        return p;
    };

    for (int c = 1; c <= 9; ++c) {
        long long y = (d - (r * c) % d) % d;
        bool ok = (n >= 7) || (y < pow10((int)(n - 1)));
        if (!ok) continue;
        string tail = to_string(y);
        string zeros(max(0LL, (n - 1) - (long long)tail.size()), '0');
        cout << c << zeros << tail << '\n';
        return 0;
    }

    cout << "No solution\n";
    return 0;
}

