/**
 * https://www.acmicpc.net/problem/15828
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    queue<int> q;

    while (true) {
        int x;
        cin >> x;

        if (x == -1) break;

        if (x == 0) {
            q.pop();
        } else {
            if ((int)q.size() < N) {
                q.push(x);
            }
        }
    }

    if (q.empty()) {
        cout << "empty";
    } else {
        while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << ' ';
        }
    }

    return 0;
}

