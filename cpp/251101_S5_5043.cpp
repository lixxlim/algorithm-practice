/**
 * https://www.acmicpc.net/problem/5043
 */
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	unsigned long long N;
	unsigned long long b;
	cin >> N >> b;
	
	unsigned long long cap = (1ULL << (b + 1)) - 1ULL;
	cout << (cap >= N ? "yes" : "no") << endl;
	return 0;
}
