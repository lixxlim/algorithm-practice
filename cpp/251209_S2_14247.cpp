/**
 * https://www.acmicpc.net/problem/14247
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	if (!(cin >> N)) return 0;
	
	vector<long long> trees(N), grows(N);
	for (int i = 0; i < N; ++i) cin >> trees[i];
	for (int i = 0; i < N; ++i) cin >> grows[i];
	
	vector<int> idx(N);
	iota(idx.begin(), idx.end(), 0);
	sort(idx.begin(), idx.end(), [&](int x, int y) {
		if(grows[x] != grows[y]) return grows[x] < grows[y];
		return x < y;
	});
	
	long long ans = 0;
	for (int i = 0; i < N; ++i) {
		int v = idx[i];
		ans += trees[v] + (long long)i * grows[v];
	}
	cout << ans << endl;
	return 0;
}
