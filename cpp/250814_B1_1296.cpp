/**
 * https://www.acmicpc.net/problem/1296
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int calcProb(const string &yName, const string &team) {
    string combined = yName + team;
    int L = 0, O = 0, V = 0, E = 0;

    for (char c : combined) {
        if (c == 'L') L++;
        else if (c == 'O') O++;
        else if (c == 'V') V++;
        else if (c == 'E') E++;
    }

    int score = ((L + O) * (L + V) * (L + E) *
                 (O + V) * (O + E) * (V + E)) % 100;
    return score;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string yName;
    int N;
    cin >> yName >> N;
    vector<string> teams(N);

    for (int i = 0; i < N; i++) {
        cin >> teams[i];
    }

    string bestTeam;
    int bestScore = -1;

    for (string &team : teams) {
        int score = calcProb(yName, team);
        if (score > bestScore || (score == bestScore && team < bestTeam)) {
            bestScore = score;
            bestTeam = team;
        }
    }

    cout << bestTeam << "\n";
    return 0;
}

