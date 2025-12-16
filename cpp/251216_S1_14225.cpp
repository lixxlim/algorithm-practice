/**
 * https://www.acmicpc.net/problem/14225
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<long long> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    sort(S.begin(), S.end());

    long long reachable = 0;

    for (long long x : S) {
        if (x > reachable + 1) {
            break;
        }
        reachable += x;
    }

    cout << reachable + 1;
    return 0;
}

