/**
 * https://www.acmicpc.net/problem/17212
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int coins[] = {1, 2, 5, 7};
	int N;
	cin >> N;
	
	vector<int> dp(N+1, 1e9);
	dp[0] = 0;
	for (int i = 1; i <= N; ++i) {
		for (int c : coins) {
			if (i - c >= 0) {
				dp[i] = min(dp[i], dp[i-c] + 1);
			}
		}
	}
	
	cout << dp[N] << endl;
	return 0;
}
