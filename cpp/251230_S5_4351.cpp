/**
 * https://www.acmicpc.net/problem/4351
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    unordered_map<string, long long> dict;

    for (int i = 0; i < m; ++i) {
        string word;
        long long value;
        cin >> word >> value;
        dict[word] = value;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < n; ++i) {
        long long salary = 0;

        while (true) {
            string line;
            getline(cin, line);

            if (line == ".") {
                break;
            }

            stringstream ss(line);
            string w;
            while (ss >> w) {
                if (dict.count(w)) {
                    salary += dict[w];
                }
            }
        }

        cout << salary << '\n';
    }

    return 0;
}

