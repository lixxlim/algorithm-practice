/**
 * https://www.acmicpc.net/problem/12789
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    stack<int> st;
    int idx = 0;
    int want = 1;

    while (want <= N) {
        if (!st.empty() && st.top() == want) {
            st.pop();
            want++;
        } else if (idx < N && a[idx] == want) {
            idx++;
            want++;
        } else if (idx < N) {
            st.push(a[idx]);
            idx++;
        } else {
            break;
        }
    }

    cout << (want == N + 1 ? "Nice" : "Sad");
    return 0;
}

