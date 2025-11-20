/**
 * https://www.acmicpc.net/problem/20044
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, N;
	cin >> n;
	N = n * 2;
	vector<int> vec(N);
	for (int i = 0; i < N; ++i) {
		cin >> vec[i];
	}
	sort(vec.begin(), vec.end());
	int mn = INT_MAX;
	for (int i = 0; i < N / 2; ++i) {
		mn = min(mn, vec[i] + vec[N - 1 - i]);
	}
	cout << mn << endl;
	return 0;
}
