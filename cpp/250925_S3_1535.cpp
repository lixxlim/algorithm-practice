/**
 * https://www.acmicpc.net/problem/1535
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> L(N + 1), J(N + 1);
    for (int i = 1; i <= N; i++) cin >> L[i];
    for (int i = 1; i <= N; i++) cin >> J[i];

    vector<int> dp(101, 0);

    for (int i = 1; i <= N; i++) {
        for (int h = 99; h >= L[i]; h--) {
            dp[h] = max(dp[h], dp[h - L[i]] + J[i]);
        }
    }

    cout << *max_element(dp.begin(), dp.begin() + 100) << "\n";
    return 0;
}

