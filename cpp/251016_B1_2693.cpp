/**
 * https://www.acmicpc.net/problem/2693
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int A[10];
        for (int i = 0; i < 10; i++) {
            cin >> A[i];
        }

        sort(A, A + 10, greater<int>());

        cout << A[2] << '\n';
    }

    return 0;
}

