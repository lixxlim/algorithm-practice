/*
 * https://www.acmicpc.net/problem/1672
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string s;
    cin >> N >> s;

    map<char, int> idx = {{'A',0}, {'G',1}, {'C',2}, {'T',3}};
    char table[4][4] = {
        {'A','C','A','G'},
        {'C','G','T','A'},
        {'A','T','C','G'},
        {'G','A','G','T'}
    };

    char result = s.back();
    for (int i = N - 2; i >= 0; i--) {
        char prev = s[i];
        result = table[idx[prev]][idx[result]];
    }

    cout << result << "\n";
    return 0;
}

