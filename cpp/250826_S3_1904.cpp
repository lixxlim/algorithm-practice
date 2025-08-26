/**
 * https://www.acmicpc.net/problem/1904
 */
#include <iostream>
#include <vector>
using namespace std;

long long pibo(int n) {
	vector<long long> dp(n+1, 1);
	for (int i = 2; i <= n; ++i) {
		dp[i] = (dp[i-1] + dp[i-2]) % 15'746;
	}
	return dp[n];
}

int main() {
	int n;
	cin >> n;
	cout << pibo(n) << endl;
	return 0;
}
