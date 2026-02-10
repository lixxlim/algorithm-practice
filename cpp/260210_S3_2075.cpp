/**
 * https://www.acmicpc.net/problem/2075
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int x;
            cin >> x;
            if ((int)pq.size() < N) pq.push(x);
            else if (x > pq.top()) {
                pq.pop();
                pq.push(x);
            }
        }
    }

    cout << pq.top() << '\n';
    return 0;
}

