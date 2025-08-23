/**
 * https://www.acmicpc.net/problem/1788
 */
#include <iostream>
using namespace std;

int main() {
	const int mod = 1'000'000'000;
	int n;
	cin >> n;
	int m = abs(n);
	
	int dp0 = 0, dp1 = 1, res = (m == 0 ? 0 : 1);
	for (int i = 2; i <= m; ++i) {
		res = (dp0 + dp1) % mod;
		dp0 = dp1;
		dp1 = res;
	}
	
	int sign = (n == 0) ? 0 : (n > 0 ? 1 : ((m & 1) ? 1 : -1));
	cout << sign << endl << res << endl;
	return 0;
}
