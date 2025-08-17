/**
 * https://www.acmicpc.net/problem/15624
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	int p = 1'000'000'007;
	
	cin >> n;
	vector<int> pibo;
	pibo.push_back(0);
	pibo.push_back(1);
	
	for (int i = 2; i <= n; ++i) {
		pibo.push_back((pibo[i-1] + pibo[i-2]) % p);
	}
	
	cout << pibo[n] << endl;
	return 0;
}
