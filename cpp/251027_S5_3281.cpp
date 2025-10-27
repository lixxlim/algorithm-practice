/**
 * https://www.acmicpc.net/problem/3281
 */
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

string toT9(const string& word) {
    string res;
    for (char c : word) {
        if (c >= 'A' && c <= 'C') res += '2';
        else if (c >= 'D' && c <= 'F') res += '3';
        else if (c >= 'G' && c <= 'I') res += '4';
        else if (c >= 'J' && c <= 'L') res += '5';
        else if (c >= 'M' && c <= 'O') res += '6';
        else if (c >= 'P' && c <= 'S') res += '7';
        else if (c >= 'T' && c <= 'V') res += '8';
        else if (c >= 'W' && c <= 'Z') res += '9';
    }
    return res;
}

int main() {
    int M;
    cin >> M;
    vector<string> dict(M);
    unordered_map<string, string> t9map;

    for (int i = 0; i < M; ++i) {
        cin >> dict[i];
        string code = toT9(dict[i]);
        if (t9map.find(code) == t9map.end())
            t9map[code] = dict[i];
    }

    int N;
    cin >> N;
    vector<int> seq(N);
    for (int i = 0; i < N; ++i) cin >> seq[i];

    string current;
    vector<string> result;

    for (int n : seq) {
        if (n == 1) {
            if (!current.empty()) {
                if (t9map.find(current) != t9map.end())
                    result.push_back(t9map[current]);
                else
                    result.push_back(string(current.size(), '*'));
                current.clear();
            }
        } else {
            current += char('0' + n);
        }
    }

    if (!current.empty()) {
        if (t9map.find(current) != t9map.end())
            result.push_back(t9map[current]);
        else
            result.push_back(string(current.size(), '*'));
    }

    for (int i = 0; i < result.size(); ++i) {
        if (i) cout << ' ';
        cout << result[i];
    }
    cout << endl;
}

