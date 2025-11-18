/**
 * https://www.acmicpc.net/problem/12101
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        long long v = 0;
        if (i - 1 >= 0) v += dp[i - 1];
        if (i - 2 >= 0) v += dp[i - 2];
        if (i - 3 >= 0) v += dp[i - 3];
        dp[i] = v;
    }

    if (k > dp[n]) {
        cout << -1 << "\n";
        return 0;
    }

    int remain = n;
    long long kk = k;
    vector<int> ans;

    while (remain > 0) {
        for (int x = 1; x <= 3; x++) {
            if (remain - x < 0) continue;
            long long cnt = dp[remain - x];
            if (kk > cnt) {
                kk -= cnt;
            } else {
                ans.push_back(x);
                remain -= x;
                break;
            }
        }
    }

    for (int i = 0; i < (int)ans.size(); i++) {
        if (i) cout << '+';
        cout << ans[i];
    }
    cout << "\n";

    return 0;
}

