/**
 * https://www.acmicpc.net/problem/2435
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> lit = vector<int>(N, 0);
	for (int i = 0; i < N; ++i) cin >> lit[i];
	
	int sum = 0;
	for (int i = 0; i < K; ++i) {
		sum += lit[i];
	}
	
	int maxsum = sum;
	for (int i = K; i < N; ++i) {
		sum = sum - lit[i-K] + lit[i];
		maxsum = max(maxsum, sum);
	}
	
	cout << maxsum << endl;
	return 0;
}
