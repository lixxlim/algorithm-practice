/**
 * https://www.acmicpc.net/problem/2596
 */
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string input;
    cin >> N >> input;

    vector<pair<char, string>> table = {
        {'A', "000000"},
        {'B', "001111"},
        {'C', "010011"},
        {'D', "011100"},
        {'E', "100110"},
        {'F', "101001"},
        {'G', "110101"},
        {'H', "111010"}
    };

    string result;

    for (int i = 0; i < N; i++) {
        string segment = input.substr(i * 6, 6);
        bool found = false;

        for (auto &p : table) {
            if (segment == p.second) {
                result += p.first;
                found = true;
                break;
            }
        }

        if (!found) {
            for (auto &p : table) {
                int diff = 0;
                for (int j = 0; j < 6; j++) {
                    if (segment[j] != p.second[j]) diff++;
                }
                if (diff == 1) { 
                    result += p.first;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << result << "\n";
    return 0;
}

