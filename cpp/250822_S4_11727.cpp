/**
 * https://www.acmicpc.net/problem/11727
 */
#include <iostream>
#include <vector>

using namespace std;

int p = 10'007;

int main() {
	int n;
	cin >> n;
	
	vector<int> dp(n+1, 0);
	dp[1] = 1;
	if (n >= 2) {
		dp[2] = 3;
	}
	
	for (int i = 3; i < n+1; ++i) {
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % p;
	}
	
	cout << (dp[n] % p) << endl;
	
	return 0;
}

