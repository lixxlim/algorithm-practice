/**
 * https://www.acmicpc.net/problem/14465
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, K, B;
    std::cin >> N >> K >> B;

    std::vector<int> vec(N + 1, 1);

    for (int i = 0; i < B; ++i) {
        int idx;
        std::cin >> idx; 
        vec[idx] = 0;
    }

    int cur_val = 0;
    for (int i = 1; i <= K; ++i) cur_val += vec[i];

    int max_val = cur_val;
    for (int i = K + 1; i <= N; ++i) {
        cur_val += vec[i] - vec[i - K];
        max_val = std::max(max_val, cur_val);
    }

    std::cout << (K - max_val) << "\n";
    return 0;
}

