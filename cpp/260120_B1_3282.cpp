/**
 * https://www.acmicpc.net/problem/3282
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, G;
    cin >> N >> G;

    vector<int> occ(N + 1, 0);

    auto find_empty = [&]() -> int {
        for (int i = 1; i <= N; i++) if (occ[i] == 0) return i;
        return -1;
    };

    auto find_single = [&]() -> int {
        for (int i = 1; i <= N; i++) if (occ[i] == 1) return i;
        return -1;
    };

    for (int gi = 0; gi < G; gi++) {
        int m;
        cin >> m;

        while (m >= 2) {
            int r = find_empty();
            if (r == -1) break;
            occ[r] = 2;
            m -= 2;
        }

        if (m == 1) {
            int r = find_empty();
            if (r != -1) {
                occ[r] = 1;
                m -= 1;
            }
        }

        while (m > 0) {
            int r = find_single();
            occ[r] = 2;
            m--;
        }
    }

    for (int i = 1; i <= N; i++) cout << occ[i] << "\n";
    return 0;
}

