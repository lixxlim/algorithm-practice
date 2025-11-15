/**
 * https://www.acmicpc.net/problem/3271
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	set<int> kuku;
	kuku.insert(1);
	for (int i = 2; i < 10; ++i) {
		kuku.insert(i);
		for (int j = 2; j < 10; ++j) {
			kuku.insert(j);
			kuku.insert(i * j);
		}
	}
	auto ret = kuku.find(N);
	if (ret != kuku.end()) {
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
	return 0;
}
