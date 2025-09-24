/**
 * https://www.acmicpc.net/problem/17484
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	
	vector<vector<int>> fuel(N, vector<int>(M));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			cin >> fuel[i][j];
		}
	const int INF = 1e9;
	vector<vector<vector<int>>> dp(N, vector<vector<int>>(M, vector<int>(3, INF)));
	
	for (int j = 0; j < M; j++) {
		for (int d = 0; d < 3; d++) {
			dp[0][j][d] = fuel[0][j];
		}
	}
	
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < M; j++) {
			for (int d = 0; d < 3; d++) {
				int prev_j = j + (d - 1);
				if (prev_j < 0 || prev_j >= M) {
					continue;
				}
				
				for (int k = 0; k < 3; k++) {
					if (k == d) {
						continue;
					}
					dp[i][j][d] = min(dp[i][j][d], dp[i-1][prev_j][k] + fuel[i][j]);
				}
			}
		}
	}
	
	int answer = INF;
	for (int j = 0; j < M; j++) {
		for (int d = 0; d < 3; d++) {
			answer = min(answer, dp[N-1][j][d]);
		}
	}
	
	cout << answer << endl;
	return 0;
}

