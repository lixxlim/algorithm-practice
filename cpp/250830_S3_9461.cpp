/**
 * https://www.acmicpc.net/problem/9461
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T, N;
	cin >> T;
	
	vector<long long> nums(101, 1);
	for (int i = 4; i < 101; ++i) {
		nums[i] = nums[i - 2] + nums[i - 3];
	}
	
	while(T--) {
		cin >> N;
		cout << nums[N] << endl;
	}
}
