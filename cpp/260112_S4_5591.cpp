/**
 * https://www.acmicpc.net/problem/5591
 */
#include <iostream>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	
	int N, K;
	std::cin >> N >> K;
	
	std::vector<int> v(N);
	for (int i = 0; i < N; ++i) std::cin >> v[i];
	
	long long cur_sum = 0;
	for (int i = 0; i < K; ++i) cur_sum += v[i];
	
	long long max_sum = cur_sum;
	for (int i = K; i < N; ++i) {
		cur_sum += v[i] - v[i - K];
		max_sum = std::max(max_sum, cur_sum);
	}
	
	std::cout << max_sum << "\n";
	return 0;
}
