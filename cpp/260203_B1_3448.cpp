/**
 * https://www.acmicpc.net/problem/3448
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    string line;
    getline(cin, line);

    for (int tc = 0; tc < N; tc++) {
        vector<string> lines;

        while (getline(cin, line) && line.empty()) {}

        if (!cin && line.empty()) line = "";

        if (!line.empty() || cin) {
            if (!line.empty()) lines.push_back(line);
        }

        while (getline(cin, line)) {
            if (line.empty()) break;
            lines.push_back(line);
        }

        long long A = 0, H = 0;
        for (auto &s : lines) {
            A += (long long)s.size();
            for (char c : s) if (c == '#') H++;
        }

        long long R = A - H;

        long long x10;
        if (A == 0) {
            x10 = 0;
        } else {
            x10 = (R * 1000LL + A / 2) / A;
        }

        cout << "Efficiency ratio is ";
        if (x10 % 10 == 0) {
            cout << (x10 / 10);
        } else {
            cout << (x10 / 10) << "." << (x10 % 10);
        }
        cout << "%.\n";
    }

    return 0;
}

