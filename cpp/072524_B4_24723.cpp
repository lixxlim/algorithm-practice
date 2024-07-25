/**
 * https://www.acmicpc.net/problem/24723
 */
#include <iostream>
using namespace std;

int main() {
	int n;
	int ret;
	
	cin >> n;
	
	ret = 2;
	for(int i = 1; i < n; i++) {
		ret *= 2;
	}
	
	cout << ret << endl;
}
