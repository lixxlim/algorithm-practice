/**
 * https://www.acmicpc.net/problem/1024
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    int L;
    cin >> N >> L;

    for (int k = L; k <= 100; k++) {
        long long t = k * (long long)(k - 1) / 2;
        long long rem = N - t;
        if (rem < 0) continue;
        if (rem % k != 0) continue;

        long long a = rem / k;
        if (a < 0) continue;

        for (int i = 0; i < k; i++) {
            cout << a + i;
            if (i + 1 < k) cout << ' ';
        }
        cout << '\n';
        return 0;
    }

    cout << -1 << '\n';
    return 0;
}

