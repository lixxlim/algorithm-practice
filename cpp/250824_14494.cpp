/**
 * https://www.acmicpc.net/problem/14494
 */
#include <iostream>
#include <vector>
using namespace std;

const int p = 10'0000'0007;

int main() {
	long long n, m;
	cin >> n >> m;
	
	vector<vector<long long>> map(n+1, vector<long long>(m+1, 1));
	for (int i = 2; i <= n; ++i) {
		for (int j = 2; j <= m; ++j) {
			map[i][j] = (map[i-1][j] + map[i-1][j-1] + map[i][j-1]) % p;
		}
	}
	
	cout << map[n][m] << endl;
	return 0;
}
