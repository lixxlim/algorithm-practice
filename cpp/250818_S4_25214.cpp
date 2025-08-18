/**
 * https://www.acmicpc.net/problem/25214
 */
#include <ios>
#include <iostream>
#include <limits>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	int min_val = numeric_limits<int>::max();
	int max_val = 0;
	ostringstream oos;
	cin >> n >> min_val;
	oos << max_val;
	for (int i = 1; i < n; ++i) {
		int cur;
		cin >> cur;
		max_val = max(max_val, cur - min_val);
		oos << " " << max_val;
		min_val = min(min_val, cur);
	}
	cout << oos.str() << endl;
	return 0;
}
