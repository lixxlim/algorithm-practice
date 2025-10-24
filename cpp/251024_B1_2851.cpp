/**
 * https://www.acmicpc.net/problem/2851
 */
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
	vector<int> mus(10);
	for (int i = 0; i < mus.size(); ++i) cin >> mus[i];
	
	int res = mus[0];
	vector<int> ress(10, 0);
	ress[0] = res;
	for (int i = 1; i < mus.size(); ++i) {
		ress[i] += mus[i] + ress[i-1];
		int be = abs(100 - res);
		int af = abs(100 - ress[i]);
		if (be > af) res = ress[i];
		if (be == af) res = max(ress[i], ress[i-1]);
		if (res > 100) break;
	}
	cout << res << endl;
	return 0;
}
