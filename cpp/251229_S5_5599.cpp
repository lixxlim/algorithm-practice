/**
 * https://www.acmicpc.net/problem/5599
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int m;
	cin >> m;

	vector<int> cards(2 * n);
	for (int i = 0; i < 2 * n; ++i) {
		cards[i] = i + 1;
	}

	for (int i = 0; i < m; ++i) {
		int k;
		cin >> k;

		if (k == 0) {
			vector<int> tmp;
			tmp.reserve(2 * n);

			for (int j = 0; j < n; ++j) {
				tmp.push_back(cards[j]);
				tmp.push_back(cards[j + n]);
			}

			cards = std::move(tmp);
		} else {
			rotate(cards.begin(), cards.begin() + k, cards.end());
		}
	}

	for (int x : cards) {
		cout << x << '\n';
	}

	return 0;
}

