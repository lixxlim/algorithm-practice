/**
 * https://www.acmicpc.net/problem/6159
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long S;
    cin >> N >> S;

    vector<long long> L(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    long long ans = 0;
    int i = 0, j = N - 1;

    while (i < j) {
        if (L[i] + L[j] <= S) {
            ans += (j - i);
            i++;
        } else {
            j--;
        }
    }

    cout << ans << "\n";
    return 0;
}

