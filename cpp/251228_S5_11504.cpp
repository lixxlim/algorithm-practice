/**
 * https://www.acmicpc.net/problem/11504
 */
#include <bits/stdc++.h>
using namespace std;

int check(int start, const vector<int> pan, int N, int M, int X, int Y) {
	int Z = 0;
	for (int i = 0; i < M; ++i) {
		int idx = ((start + i) % N);
		Z = Z * 10 + pan[idx];
	}
	if (X <= Z && Z <= Y) {
		return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	if (!(cin >> T)) return 0;
	vector<int> result(T);
	
	for (int t = 0; t < T; ++t) {
		int N, M;
		cin >> N >> M;
		vector<int> pan(N);
		
		int X = 0, Y = 0, ret = 0;
		for (int i = 0; i < M; ++i) {
			int it;
			cin >> it;
			X = X * 10 + it;
		}
		for (int i = 0; i < M; ++i) {
			int it;
			cin >> it;
			Y = Y * 10 + it;
		}
		for (int i = 0; i < N; ++i) {
			cin >> pan[i];
		}
		for (int i = 0; i < N; ++i) {
			ret += check(i, pan, N, M, X, Y);
		}
		result[t] = ret;
	}
	
	for (int t = 0; t < T; ++t) {
		cout << result[t] << "\n";
	}
	return 0;
}
