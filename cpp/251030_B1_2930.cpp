/**
 * https://www.acmicpc.net/problem/2930
 */
#include <bits/stdc++.h>
using namespace std;

int score(char me, char you) {
    if (me == you) return 1;
    if ((me == 'R' && you == 'S') ||
        (me == 'S' && you == 'P') ||
        (me == 'P' && you == 'R')) return 2;
    return 0;
}

int main() {
    int R, N;
    cin >> R;
    string sang;
    cin >> sang;
    cin >> N;
    vector<string> friends(N);
    for (int i = 0; i < N; ++i) cin >> friends[i];

    // 1️⃣ 실제 점수 계산
    int real_score = 0;
    for (int r = 0; r < R; ++r) {
        for (int i = 0; i < N; ++i) {
            real_score += score(sang[r], friends[i][r]);
        }
    }

    // 2️⃣ 최대 점수 계산
    int max_score = 0;
    for (int r = 0; r < R; ++r) {
        int best = 0;
        for (char c : {'R', 'S', 'P'}) {
            int sum = 0;
            for (int i = 0; i < N; ++i) {
                sum += score(c, friends[i][r]);
            }
            best = max(best, sum);
        }
        max_score += best;
    }

    cout << real_score << "\n" << max_score << "\n";
}

