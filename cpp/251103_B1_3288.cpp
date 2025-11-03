/**
 * https://www.acmicpc.net/problem/3288
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    if (!(cin >> N)) return 0;
    vector<string> top_to_bottom(N);
    for (int i = 0; i < N; ++i) cin >> top_to_bottom[i];

    auto mapc = [](char c) {
        if (c == 'U') return 0;
        if (c == 'R') return 1;
        if (c == 'D') return 2;
        return 3;
    };

    vector<vector<int>> s(N + 1);
    for (int idx = 0; idx < N; ++idx) {
        int r = N - idx;
        s[r].resize(top_to_bottom[idx].size() + 1);
        for (int j = 0; j < (int)top_to_bottom[idx].size(); ++j)
            s[r][j + 1] = mapc(top_to_bottom[idx][j]);
    }

    vector<pair<int,int>> moves;

    for (int i = 1; i <= N; ++i) {
        int L = (int)s[i].size() - 1;
        for (int j = 1; j <= L; ++j) {
            int t = (4 - (s[i][j] % 4) + 4) % 4;
            for (int k = 0; k < t; ++k) moves.push_back({i, j});
            s[i][j] = (s[i][j] + t) % 4;
            if (i + 1 <= N) {
                if (j - 1 >= 1 && j - 1 < (int)s[i + 1].size())
                    s[i + 1][j - 1] = (s[i + 1][j - 1] - t) & 3;
                if (j >= 1 && j < (int)s[i + 1].size())
                    s[i + 1][j] = (s[i + 1][j] - t) & 3;
            }
        }
    }

    for (auto &p : moves) cout << p.first << ' ' << p.second << '\n';
    return 0;
}

