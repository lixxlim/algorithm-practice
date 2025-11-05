/**
 * https://www.acmicpc.net/problem/3787
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    while ( (cin >> n) ) {
        long double kf = (sqrtl(8.0L * n + 1.0L) - 1.0L) / 2.0L;
        long long k = (long long)ceill(kf);
        long long prev = k * (k - 1) / 2;
        long long offset = n - prev;
        long long p, q;
        if (k % 2 == 0) {
            p = offset;
            q = k - offset + 1;
        } else {
            p = k - offset + 1;
            q = offset;
        }
        cout << "TERM " << n << " IS " << p << "/" << q << "\n";
    }
    return 0;
}

