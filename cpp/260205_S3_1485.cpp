/**
 * https://www.acmicpc.net/problem/1485
 */
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct Point {
    ll x, y;
};

ll dist2(const Point& a, const Point& b) {
    ll dx = a.x - b.x;
    ll dy = a.y - b.y;
    return dx * dx + dy * dy;
}

bool canMakeSquare(const vector<Point>& p) {
    vector<ll> d;
    d.reserve(6);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            d.push_back(dist2(p[i], p[j]));
        }
    }

    sort(d.begin(), d.end());

    return d[0] > 0 &&
           d[0] == d[1] && d[1] == d[2] && d[2] == d[3] &&
           d[4] == d[5] &&
           d[4] == 2 * d[0];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        vector<Point> p(4);
        for (int i = 0; i < 4; i++) {
            cin >> p[i].x >> p[i].y;
        }
        cout << (canMakeSquare(p) ? 1 : 0) << '\n';
    }

    return 0;
}

