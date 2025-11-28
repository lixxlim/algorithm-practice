/**
 * https://www.acmicpc.net/problem/1895
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int R, C;
    if (!(cin >> R >> C)) return 0;
    vector<vector<int>> A(R, vector<int>(C));
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            cin >> A[i][j];
    int T;
    cin >> T;
    int count = 0;
    for (int i = 0; i + 2 < R; ++i) {
        for (int j = 0; j + 2 < C; ++j) {
            int vals[9];
            int idx = 0;
            for (int di = 0; di < 3; ++di)
                for (int dj = 0; dj < 3; ++dj)
                    vals[idx++] = A[i+di][j+dj];
            sort(vals, vals+9);
            int median = vals[4];
            if (median >= T) ++count;
        }
    }
    cout << count << '\n';
    return 0;
}

