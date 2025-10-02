/**
 * https://www.acmicpc.net/problem/2037
 */
#include <bits/stdc++.h>
using namespace std;

map<char, pair<int,int>> makeMapping() {
    map<char, pair<int,int>> mp;
    string keys[10] = {
        "", "", "ABC", "DEF", "GHI", "JKL",
        "MNO", "PQRS", "TUV", "WXYZ"
    };
    for (int num = 2; num <= 9; num++) {
        for (int i = 0; i < (int)keys[num].size(); i++) {
            mp[keys[num][i]] = {num, i+1};
        }
    }
    mp[' '] = {1, 1};
    return mp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, w;
    string s;
    cin >> p >> w;
    cin.ignore();
    getline(cin, s);

    auto mp = makeMapping();

    int total = 0;
    int prevKey = -1;

    for (char c : s) {
        auto [key, cnt] = mp[c];
        if (prevKey == key && c != ' ') { 
            total += w;
        }
        total += cnt * p;
        prevKey = key;
    }

    cout << total << "\n";
    return 0;
}

