/**
 * https://www.acmicpc.net/problem/2309
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	vector<int> lit = vector<int>(9);
	for (int k = 0; k < 9; ++k) {
		cin >> lit[k];
	}
	sort(lit.begin(), lit.end());
	int sum = accumulate(lit.begin(), lit.end(), 0);
	bool bk = false;
	int i, j;
	for (i = 0; i < lit.size(); ++i) {
		for(j = i + 1; j < lit.size(); ++j) {
			if (sum - lit[i] - lit[j] == 100) {
				bk = true;
			}
			if (bk) break;
		}
		if (bk) break;
	}
	for (int k = 0; k < lit.size(); ++k) {
		if (k == i || k == j) continue;
		cout << lit[k] << endl;
	}
	
	return 0;
}
