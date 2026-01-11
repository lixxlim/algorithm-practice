/**
 * https://www.acmicpc.net/problem/21921
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, X;
	cin >> N >> X;
	
	vector<int> blog(N);
	for(int i = 0; i < N; ++i) cin >> blog[i];
	
	
	int max_view = accumulate(blog.begin(), blog.begin() + X, 0);
	int cur_view = max_view;
	int max_period = 1;
	for (int i = X; i < N; ++i) {
		cur_view += blog[i] - blog[i - X];
		if (cur_view > max_view) {
			max_view = cur_view;
			max_period = 1;
		} else if (cur_view == max_view) {
			++max_period;
		}
	}
	
	if (max_view == 0) {
		cout << "SAD" << "\n";
	} else {
		cout << max_view << "\n" << max_period << "\n";
	}
	return 0;
}
