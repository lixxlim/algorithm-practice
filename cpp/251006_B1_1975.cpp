/**
 * https://www.acmicpc.net/problem/1975
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        long long ans = 0;
        for (int b = 2; b <= N; ++b) {
            int temp = N;
            int cnt = 0;
            while (temp % b == 0) {
                temp /= b;
                cnt++;
            }
            ans += cnt;
        }
        cout << ans << "\n";
    }
}

