/**
 * https://www.acmicpc.net/problem/26561
 */
#include <iostream>
using namespace std;

int main() {
	int n;
	int p, t;
	
	cin >> n;
	while( n-- ) {
		cin >> p >> t;
		cout << p + (t / 4) - (t / 7) << endl;
	}
}
