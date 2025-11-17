/**
 * https://www.acmicpc.net/problem/3023
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int R, C;
    if (!(cin >> R >> C)) return 0;
    vector<string> quad(R);
    for (int i = 0; i < R; ++i) cin >> quad[i];
    int A, B;
    cin >> A >> B;
    int H = 2 * R, W = 2 * C;
    vector<string> card(H, string(W, '.'));

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int r = i < R ? i : 2 * R - 1 - i;
            int c = j < C ? j : 2 * C - 1 - j;
            card[i][j] = quad[r][c];
        }
    }

    int ei = A - 1;
    int ej = B - 1;
    card[ei][ej] = (card[ei][ej] == '#') ? '.' : '#';

    for (int i = 0; i < H; ++i) {
        cout << card[i] << '\n';
    }
    return 0;
}

