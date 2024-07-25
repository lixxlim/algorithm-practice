/**
 * https://www.acmicpc.net/problem/24365
 */
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int t;
	
	cin >> a >> b >> c;
	t = (a+b+c)/3;
	
	cout << (t-a) * 2 + (t-b) << endl;
}
