/**
 * https://www.acmicpc.net/problem/9657
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<bool> dp(N+1, true);
	if (N > 1) dp[2] = false;
	for (int i = 5; i <= N; ++i) {
		dp[i] = !(dp[i-1] && dp[i-3] && dp[i-4]);
	}
	cout << (dp[N] ? "SK" : "CY") << endl;
}
