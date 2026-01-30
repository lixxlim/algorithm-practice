/**
 * https://www.acmicpc.net/problem/3447
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (getline(cin, s)) {
        string out;
        out.reserve(s.size());
        for (char c : s) {
            out.push_back(c);
            int m = (int)out.size();
            if (m >= 3 && out[m - 3] == 'B' && out[m - 2] == 'U' && out[m - 1] == 'G') {
                out.resize(m - 3);
            }
        }
        cout << out;
        if (!cin.eof()) cout << "\n";
    }
    return 0;
}

