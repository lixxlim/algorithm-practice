/**
 * https://www.acmicpc.net/problem/3546
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    int n = (int)s.size();
    int zeros = 0, ones = 0, cnt01 = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == '0') zeros++;
        else ones++;
        int j = (i + 1) % n;
        if (s[i] == '0' && s[j] == '1') cnt01++;
    }

    long long left = 1LL * cnt01 * n;
    long long right = 1LL * ones * zeros;

    if (left < right) cout << "SHOOT\n";
    else if (left > right) cout << "ROTATE\n";
    else cout << "EQUAL\n";

    return 0;
}

