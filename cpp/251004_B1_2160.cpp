/**
 * https://www.acmicpc.net/problem/2160
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<vector<string>> pictures(N, vector<string>(5));
    for (int i = 0; i < N; i++) {
        for (int r = 0; r < 5; r++) {
            cin >> pictures[i][r];
        }
    }

    int minDiff = INT_MAX;
    pair<int, int> answer;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = 0;
            for (int r = 0; r < 5; r++) {
                for (int c = 0; c < 7; c++) {
                    if (pictures[i][r][c] != pictures[j][r][c]) diff++;
                }
            }
            if (diff < minDiff) {
                minDiff = diff;
                answer = {i + 1, j + 1};
            }
        }
    }

    cout << answer.first << " " << answer.second << "\n";

    return 0;
}

