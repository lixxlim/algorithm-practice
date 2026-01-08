/**
 * https://www.acmicpc.net/problem/2559
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, K;
	cin >> N >> K;
	vector<int> v(N);
	for (int i = 0; i < N; ++i) cin >> v[i];
	
	int cur_sum = 0;
	for (int i = 0; i < K; ++i) cur_sum += v[i];
	
	int max_sum = cur_sum;
	for (int i = K; i < N; ++i) {
		cur_sum += v[i] - v[i - K];
		max_sum = max(max_sum, cur_sum);
	}
	cout << max_sum << "\n";
	return 0;
}
