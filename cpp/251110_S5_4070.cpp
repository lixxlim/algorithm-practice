/**
 * https://www.acmicpc.net/problem/4070
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    int tc = 1;
    while (cin >> n >> k) {
        if (n == 0 && k == 0) break;
        vector<int> len(n);
        for (int i = 0; i < n; ++i) {
            string s; cin >> s;
            len[i] = (int)s.size();
        }
        sort(len.begin(), len.end());
        vector<long long> pref(n+1, 0);
        for (int i = 0; i < n; ++i) pref[i+1] = pref[i] + len[i];

        auto ok = [&](int r) {
            int l = r - k + 1;
            long long S = pref[r+1] - pref[l];
            int a = len[l], b = len[r];
            if (b - a > 4) return false;
            if (S < 1LL*k*(b - 2)) return false;
            if (S > 1LL*k*(a + 2)) return false;
            return true;
        };

        vector<char> dp(n+1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; ++i) {
            if (i >= k && dp[i-k]) {
                if (ok(i-1)) dp[i] = 1;
            }
        }

        cout << "Case " << tc++ << ": " << (dp[n] ? "yes" : "no") << "\n\n";
    }
    return 0;
}

