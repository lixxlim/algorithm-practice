/**
 * https://www.acmicpc.net/problem/13699
 */
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	long long t[36] = {0};
	t[0] = 1;
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			t[i] += t[j] * t[i - 1 - j];
		}
	}
	
	cout << t[n] << endl;
	return 0;
}
