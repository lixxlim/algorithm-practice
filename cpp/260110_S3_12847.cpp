/**
 * https://www.acmicpc.net/problem/12847
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	
	vector<long long> days(n);
	for (int i = 0; i < n; ++i) cin >> days[i];
	
	long long max_money = 0;
	for (int i = 0; i < m; ++i) max_money += days[i];
	
	long long cur_money = max_money;
	for (int i = m; i < n; ++i) {
		cur_money += days[i] - days[i - m];
		max_money = max(max_money, cur_money);
	}
	
	cout << max_money << "\n";
	return 0;
}
