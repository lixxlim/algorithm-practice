/**
 * https://www.acmicpc.net/problem/1333
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, L, D;
    cin >> N >> L >> D;

    int total = N * L + (N - 1) * 5;

    for (int t = 0;; t += D) {
        bool inSong = false;

        for (int i = 0; i < N; i++) {
            int start = i * (L + 5);
            int end = start + L;
            if (t >= start && t < end) {
                inSong = true;
                break;
            }
        }

        if (!inSong) {
            cout << t << "\n";
            break;
        }
    }

    return 0;
}

