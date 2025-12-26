/**
 * https://www.acmicpc.net/problem/16165
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    map<string, vector<string>> teamMembers;
    map<string, string> memberTeam;

    for (int i = 0; i < N; i++) {
        string team;
        int cnt;
        cin >> team >> cnt;

        vector<string> members(cnt);
        for (int j = 0; j < cnt; j++) {
            cin >> members[j];
            memberTeam[members[j]] = team;
        }

        sort(members.begin(), members.end());
        teamMembers[team] = members;
    }

    while (M--) {
        string name;
        int type;
        cin >> name >> type;

        if (type == 0) {
            for (const auto& member : teamMembers[name]) {
                cout << member << '\n';
            }
        } else {
            cout << memberTeam[name] << '\n';
        }
    }

    return 0;
}

