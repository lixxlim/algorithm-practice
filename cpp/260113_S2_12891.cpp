/**
 * https://www.acmicpc.net/problem/12891
 */
#include <bits/stdc++.h>
using namespace std;

static inline int idx(char c) {
    if (c == 'A') return 0;
    if (c == 'C') return 1;
    if (c == 'G') return 2;
    return 3;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int S, P;
    cin >> S >> P;

    string s;
    cin >> s;

    int req[4];
    for (int i = 0; i < 4; i++) cin >> req[i];

    int cnt[4] = {0, 0, 0, 0};
    int satisfied = 0;
    for (int i = 0; i < 4; i++) if (req[i] == 0) satisfied++;

    auto add = [&](char c) {
        int k = idx(c);
        cnt[k]++;
        if (cnt[k] == req[k]) satisfied++;
    };

    auto remove = [&](char c) {
        int k = idx(c);
        if (cnt[k] == req[k]) satisfied--;
        cnt[k]--;
    };

    for (int i = 0; i < P; i++) add(s[i]);

    long long ans = 0;
    if (satisfied == 4) ans++;

    for (int i = P; i < S; i++) {
        add(s[i]);
        remove(s[i - P]);
        if (satisfied == 4) ans++;
    }

    cout << ans << "\n";
    return 0;
}

