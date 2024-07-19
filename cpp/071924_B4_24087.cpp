/**
 * https://www.acmicpc.net/problem/24087
 */
#include <iostream>
using namespace std;

int main() {
	int s, a, b;
	int ret = 250;
	
	cin >> s >> a >> b;
	if( s > a ) {
		ret += (((s - a) -1) / b + 1) * 100;
	}
	cout << ret << endl;
}
