/**
 * https://www.acmicpc.net/problem/2670
 */
#include <ios>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	double savedValue;
	double maxValue = 0.0;
	vector<double> nums;
	
	cin >> N;
	nums.resize(N);
	for (int i = 0; i < N; ++i) {
		cin >> nums[i];
	}
	
	for (int i = 0; i < N; ++i) {
		savedValue = 1.0;
		for (int j = i; j < N; ++j) {
			savedValue *= nums[j];
			maxValue = max(savedValue, maxValue);
		}
	}
	
	cout << fixed << setprecision(3) << maxValue << endl;
	return 0;
}
