/**
 * https://www.acmicpc.net/problem/2846
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> height(N);
    for (int i = 0; i < N; i++) cin >> height[i];

    int max_uphill = 0;
    int start = height[0];

    for (int i = 1; i < N; i++) {
        if (height[i] > height[i - 1]) {
            max_uphill = max(max_uphill, height[i] - start);
        } else if (height[i] <= height[i - 1]) {
            start = height[i];
        }
    }

    cout << max_uphill << endl;
    return 0;
}

