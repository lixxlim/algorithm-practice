/**
 * https://www.acmicpc.net/problem/10025
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;
    cin >> N >> K;

    vector<pair<long long, long long>> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    long long ans = 0, sum = 0;
    int l = 0;

    for (int r = 0; r < N; r++) {
        sum += v[r].second;
        while (v[r].first - v[l].first > 2 * K) {
            sum -= v[l].second;
            l++;
        }
        ans = max(ans, sum);
    }

    cout << ans << "\n";
    return 0;
}

