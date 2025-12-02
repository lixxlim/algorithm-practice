/**
 * https://www.acmicpc.net/problem/20300
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n % 2 != 0) {
        v.push_back(0);
    }

    sort(v.begin(), v.end());

    long long max_loss = 0;
    int size = v.size();

    for (int i = 0; i < size / 2; i++) {
        long long current_sum = v[i] + v[size - 1 - i];
        if (current_sum > max_loss) {
            max_loss = current_sum;
        }
    }

    cout << max_loss;

    return 0;
}
