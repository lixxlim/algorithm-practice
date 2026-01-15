/**
 * https://www.acmicpc.net/problem/1522
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = (int)s.size();
    int A = 0;
    for (char c : s) if (c == 'a') A++;

    if (A == 0 || A == n) {
        cout << 0 << "\n";
        return 0;
    }

    string t = s + s;

    int bcnt = 0;
    for (int i = 0; i < A; i++) if (t[i] == 'b') bcnt++;

    int ans = bcnt;

    for (int start = 1; start < n; start++) {
        if (t[start - 1] == 'b') bcnt--;
        if (t[start + A - 1] == 'b') bcnt++;
        ans = min(ans, bcnt);
    }

    cout << ans << "\n";
    return 0;
}

