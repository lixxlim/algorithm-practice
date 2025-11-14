/**
 * https://www.acmicpc.net/problem/4458
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

    for (int i = 0; i < N; ++i) {
        getline(cin, line);
        if (!line.empty() && line[0] >= 'a' && line[0] <= 'z') {
            line[0] = line[0] - 'a' + 'A';
        }
        cout << line << '\n';
    }

    return 0;
}

