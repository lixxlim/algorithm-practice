/**
 * https://www.acmicpc.net/problem/2491
 */
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	int* nums = new int[N];
	for (int i = 0; i < N; ++i) {
		cin >> nums[i];
	}
	
	int maxLen = 1;
	int upLen = 1;
	int downLen = 1;
	
	for (int i = 1; i < N; ++i) {
		if (nums[i] >= nums[i - 1]) {
			++upLen;
		} else {
			upLen = 1;
		}
		
		if (nums[i] <= nums[i - 1]) {
			++downLen;
		} else {
			downLen = 1;
		}
		
		if (upLen > maxLen) maxLen = upLen;
		if (downLen > maxLen) maxLen = downLen;
	}
	
	cout << maxLen << endl;
}
