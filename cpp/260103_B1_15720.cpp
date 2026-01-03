/**
 * https://www.acmicpc.net/problem/15720
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int B, C, D;
	if (!(cin >> B >> C >> D)) return 0;
	vector<int> buger(B);
	vector<int> side(C);
	vector<int> baver(D);
	int sum = 0, disc = 0;
	for (int i = 0; i < B; ++i) {
		cin >> buger[i];
		sum += buger[i];
	}
	for (int i = 0; i < C; ++i) {
		cin >> side[i];
		sum += side[i];
	}
	for (int i = 0; i < D; ++i) {
		cin >> baver[i];
		sum += baver[i];
	}
	int min_len = min({buger.size(), side.size(), baver.size()});
	sort(buger.begin(), buger.end(), greater<int>());
	sort(side.begin(), side.end(), greater<int>());
	sort(baver.begin(), baver.end(), greater<int>());
	for (int i = 0; i < min_len; ++i) {
		disc += buger[i] / 10;
		disc += side[i] / 10;
		disc += baver[i] / 10;
	}
	cout << sum << "\n" << sum - disc << "\n";
	return 0;
}
