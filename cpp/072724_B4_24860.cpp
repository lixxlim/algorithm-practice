/**
 * https://www.acmicpc.net/problem/24860
 */
#include <iostream>
using namespace std;

int main() {
	long long v1, j1, v2, j2, v3, d3, j3;
	cin >> v1 >> j1 >> v2 >> j2 >> v3 >> d3 >> j3;
	cout << (v1 * j1) * (v3 * d3 * j3) + (v2 * j2) * (v3 * d3 * j3) << endl;
}
