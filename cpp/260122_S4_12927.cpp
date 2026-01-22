/**
 * https://www.acmicpc.net/problem/12927
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = (int)s.size();

    vector<int> b(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        b[i] = (s[i - 1] == 'Y') ? 1 : 0;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) {
            ans++;
            for (int k = i; k <= n; k += i) {
                b[k] ^= 1;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}

