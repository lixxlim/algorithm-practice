/**
 * https://www.acmicpc.net/problem/2999
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;
    int N = s.size();

    int R = 1, C = N;
    for (int r = 1; r * r <= N; ++r) {
        if (N % r == 0) {
            int c = N / r;
            if (r <= c && r > R) {
                R = r;
                C = c;
            }
        }
    }

    vector<string> mat(R, string(C, ' '));
    int idx = 0;
    for (int j = 0; j < C; ++j) {
        for (int i = 0; i < R; ++i) {
            mat[i][j] = s[idx++];
        }
    }

    string ans;
    ans.reserve(N);
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            ans.push_back(mat[i][j]);
        }
    }

    cout << ans << '\n';
    return 0;
}

