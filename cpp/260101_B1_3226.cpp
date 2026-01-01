#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    int totalCost = 0;

    for (int i = 0; i < N; ++i) {
        string time;
        int D;
        cin >> time >> D;

        int HH = stoi(time.substr(0, 2));
        int MM = stoi(time.substr(3, 2));

        int cur = HH * 60 + MM;

        for (int m = 0; m < D; ++m) {
            int hour = cur / 60;

            if (hour >= 7 && hour < 19) {
                totalCost += 10;
            } else {
                totalCost += 5;
            }

            cur = (cur + 1) % 1440;
        }
    }

    cout << totalCost << '\n';
    return 0;
}

