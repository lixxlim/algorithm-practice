/**
 * https://www.acmicpc.net/problem/10211
 */
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int maxCrossingSum(const vector<int>& nums, int left, int mid, int right) {
	
	int leftSum = numeric_limits<int>::min();
	int sum = 0;
	for (int i = mid; i >= left; --i) {
		sum += nums[i];
		leftSum = max(leftSum, sum);
	}
	
	int rightSum = numeric_limits<int>::min();
	sum = 0;
	for (int i = mid + 1; i <= right; ++i) {
		sum += nums[i];
		rightSum = max(rightSum, sum);
	}
	
	return leftSum + rightSum;
}

int divideAndConquer(const vector<int>& nums, int left, int right) {
	
	if (left == right) return nums[left];
	
	int mid = (left + right) / 2;
	
	int leftMax = divideAndConquer(nums, left, mid);
	int rightMax = divideAndConquer(nums, mid + 1, right);
	int crossMax = maxCrossingSum(nums, left, mid, right);
	return max({leftMax, rightMax, crossMax});
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int T;
	cin >> T;
	vector<int> results;
	while (T--) {
		int N;
		cin >> N;
		vector<int> nums(N);
		for (int i = 0; i < N; ++i) {
			cin >> nums[i];
		}
		results.push_back(divideAndConquer(nums, 0, N - 1));
	}
	
	for (int result: results) {
		cout << result << endl;
	}
	return 0;
}
