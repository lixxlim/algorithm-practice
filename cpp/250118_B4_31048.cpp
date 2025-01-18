/**
 * https://www.acmicpc.net/problem/31048
 */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		int value = 1;
		for (int j = 2; j <= t; j++) {
			value *= j;
		}
		cout << value % 10 << endl;
	}
}
