/**
 * https://www.acmicpc.net/problem/5976
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    if (!(cin >> N)) return 0;
    vector<vector<int>> a(N, vector<int>(N));
    int top = 0, bottom = N - 1, left = 0, right = N - 1;
    int v = 1, limit = N * N;
    while (left <= right && top <= bottom) {
        for (int j = left; j <= right; ++j) a[top][j] = v++;
        ++top;
        if (top > bottom) break;
        for (int i = top; i <= bottom; ++i) a[i][right] = v++;
        --right;
        if (left > right) break;
        for (int j = right; j >= left; --j) a[bottom][j] = v++;
        --bottom;
        if (top > bottom) break;
        for (int i = bottom; i >= top; --i) a[i][left] = v++;
        ++left;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j) cout << ' ';
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
}

