/**
 * https://www.acmicpc.net/problem/3154
 */
#include <bits/stdc++.h>
using namespace std;

map<int, pair<int,int>> pos = {
    {1,{0,0}}, {2,{1,0}}, {3,{2,0}},
    {4,{0,1}}, {5,{1,1}}, {6,{2,1}},
    {7,{0,2}}, {8,{1,2}}, {9,{2,2}},
    {0,{1,3}}
};

int effort(int a, int b) {
    auto [x1,y1] = pos[a];
    auto [x2,y2] = pos[b];
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string target;
    cin >> target;

    int TH = stoi(target.substr(0,2));
    int TM = stoi(target.substr(3,2));

    int bestEffort = INT_MAX;
    int bestH = -1, bestM = -1;

    for (int h = 0; h <= 99; ++h) {
        for (int m = 0; m <= 99; ++m) {

            if (h % 24 != TH || m % 60 != TM) continue;

            int d1 = h / 10;
            int d2 = h % 10;
            int d3 = m / 10;
            int d4 = m % 10;

            int cost = effort(d1, d2)
                     + effort(d2, d3)
                     + effort(d3, d4);

            if (cost < bestEffort ||
               (cost == bestEffort &&
               (h < bestH || (h == bestH && m < bestM)))) {
                bestEffort = cost;
                bestH = h;
                bestM = m;
            }
        }
    }

    cout << setw(2) << setfill('0') << bestH
         << ":"
         << setw(2) << setfill('0') << bestM << "\n";

    return 0;
}

