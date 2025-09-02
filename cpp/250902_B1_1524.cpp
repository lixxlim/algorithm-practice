/**
 * https://www.acmicpc.net/problem/1524
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;

        int maxS = 0, maxB = 0;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            maxS = max(maxS, x);
        }
        for (int i = 0; i < M; i++) {
            int x;
            cin >> x;
            maxB = max(maxB, x);
        }

        if (maxS >= maxB)
            cout << "S\n";
        else
            cout << "B\n";
    }
    return 0;
}

