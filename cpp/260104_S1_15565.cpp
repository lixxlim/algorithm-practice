/**
 * https://www.acmicpc.net/problem/15565
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, K;
	if (!(cin >> N >> K)) return 0;
	
	vector<int> v(N);
	for (int i = 0; i < N; ++i) cin >> v[i];
	
	int l = 0, cnt = 0;
	int ans = numeric_limits<int>::max();
	
	for (int r = 0; r < N; ++r) {
		if (v[r] == 1) cnt++;
		
		while (cnt >= K) {
			ans = min(ans, r - l + 1);
			if (v[l] == 1) cnt--;
			l++;
		}
	}
	
	if (ans == numeric_limits<int>::max()) {
		cout << "-1\n";
	} else {
		cout << ans << "\n";
	}
	return 0;
}
