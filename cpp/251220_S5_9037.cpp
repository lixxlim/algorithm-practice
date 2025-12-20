/**
 * https://www.acmicpc.net/problem/9037
 */
#include <bits/stdc++.h>
using namespace std;

void od(vector<int>& vec) {
	for (int i = 0; i < vec.size(); ++i) {
		if (vec[i] & 1) {
			vec[i] += 1;
		}
	}
}

void roll(vector<int>& vec) {
	int be = vec[vec.size()-1] / 2;
	for (int i = 0; i < vec.size(); ++i) {
		int hf = vec[i] / 2;
		vec[i] = hf + be;
		be = hf;
	}
}

int check(const vector<int>& vec) {
	if (vec.size() == 1) return 0;
	for (int i = 0; i < vec.size() - 1; ++i) {
		if (vec[i] != vec[i+1]) return 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	if (!(cin >> T)) return 0;
	
	for (int i = 0; i < T; ++i) {
		int N, ret = 0;
		if (!(cin >> N)) return 0;
		vector<int> vec(N);
		for (int j = 0; j < N; ++j) cin >> vec[j];
		od(vec);
		while(check(vec)) {
			roll(vec);
			od(vec);
			++ret;
		}
		cout << ret << endl;
	}
	return 0;
}
