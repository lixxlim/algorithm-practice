/**
 * https://www.acmicpc.net/problem/14495
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> dp(n+1, 1);
	for (int i = 4; i <= n; ++i) {
		dp[i] = dp[i - 3] + dp[i - 1];
	}
	cout << dp[n] << endl;
	
	return 0;
}
