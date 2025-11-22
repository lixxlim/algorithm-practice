/**
 * https://www.acmicpc.net/problem/4375
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	while ( (cin >> N) ) {
		int rem = 1 % N;
		int len = 1;
		while (rem != 0) {
			rem = (rem * 10 + 1) % N;
			++len;
		}
		cout << len << endl;
	}
	return 0;
}
