/**
 * https://www.acmicpc.net/problem/11726
 */
#include <iostream>
#include <vector>
using namespace std;

const int p = 10'007;

int main() {
	int N;
	cin >> N;
	
	vector<long long> dp(N+1, 1);
	for (int i = 2; i <= N; ++i) {
		dp[i] = (dp[i-1] + dp[i-2]) % p;
	}
	cout << dp[N] << endl;
}
