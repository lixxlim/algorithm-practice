/**
 * https://www.acmicpc.net/problem/3982
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c;
    if (!(cin >> c)) return 0;
    while (c--) {
        unordered_map<string, int> win, loss;
        for (int i = 0; i < 16; ++i) {
            string t1, t2;
            int g1, g2;
            cin >> t1 >> t2 >> g1 >> g2;
            if (g1 > g2) {
                ++win[t1];
                ++loss[t2];
            } else {
                ++win[t2];
                ++loss[t1];
            }
            if (!win.count(t1)) win[t1] = 0;
            if (!win.count(t2)) win[t2] = 0;
            if (!loss.count(t1)) loss[t1] = 0;
            if (!loss.count(t2)) loss[t2] = 0;
        }
        string champion;
        for (auto &p : win) {
            const string &team = p.first;
            int w = p.second;
            int l = loss[team];
            if (w == 4 && l == 0) {
                champion = team;
                break;
            }
        }
        cout << champion << "\n";
    }
    return 0;
}

