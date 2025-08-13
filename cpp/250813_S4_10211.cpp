/**
 * https://www.acmicpc.net/problem/10211
 */
#include <ios>
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int msp(int N, vector<int> nums) {
	int maxValue = numeric_limits<int>::min();
	int curValue = 0;
	for (int i = 0; i < nums.size(); ++i) {
		curValue = max(nums[i], curValue + nums[i]);
		maxValue = max(maxValue, curValue);
	}
	return maxValue;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	vector<int> results;
	while(T--) {
		int N;
		cin >> N;
		vector<int> nums(N);
		for (int i = 0; i < N; ++i) {
			cin >> nums[i];
		}
		results.push_back(msp(N, nums));
	}
	
	for(int result: results) {
		cout << result << endl;
	}
	return 0;
}
