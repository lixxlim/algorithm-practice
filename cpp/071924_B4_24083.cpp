/**
 * https://www.acmicpc.net/problem/24083
 */
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << (a + b - 1) % 12 + 1 << endl;
}
