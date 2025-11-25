/**
 * https://www.acmicpc.net/problem/19949
 */
#include <bits/stdc++.h>
using namespace std;

long long dp[11][6][6][11];
int ans[11];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= 10; i++) cin >> ans[i];

    dp[0][0][0][0] = 1;

    for (int pos = 0; pos < 10; pos++) {
        for (int last = 0; last <= 5; last++) {
            for (int second = 0; second <= 5; second++) {
                for (int score = 0; score <= 10; score++) {
                    long long cur = dp[pos][last][second][score];
                    if (!cur) continue;
                    for (int c = 1; c <= 5; c++) {
                        if (c == last && c == second) continue;
                        int ns = score + (c == ans[pos + 1]);
                        dp[pos + 1][c][last][ns] += cur;
                    }
                }
            }
        }
    }

    long long res = 0;
    for (int last = 1; last <= 5; last++) {
        for (int second = 0; second <= 5; second++) {
            for (int score = 5; score <= 10; score++) {
                res += dp[10][last][second][score];
            }
        }
    }

    cout << res;
    return 0;
}

