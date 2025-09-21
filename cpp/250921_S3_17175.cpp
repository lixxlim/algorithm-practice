/**
 * https://www.acmicpc.net/problem/17175
 */
#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1'000'000'007;

int main() {
	int n;
	cin >> n;
	vector<long long> vec(n+1, 1);
	for (int i = 2; i <= n; ++i) {
		vec[i] = (1 + vec[i-1] + vec[i-2]) % MOD;
	}
	cout << vec[n] << endl;
	return 0;
}
