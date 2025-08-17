/**
 * https://www.acmicpc.net/problem/15624
 */
#include <iostream>
using namespace std;

const int per = 1'000'000'007;

pair<long long, long long> fibo(const int& n) {
	if (n == 0) {
		return {0, 1};
	}
	
	pair<long long, long long> t = fibo(n / 2);
	long long a = t.first;
	long long b = t.second;
	long long c = (a * ((2 * b % per - a + per) % per)) % per;
	long long d = (a * a % per + b * b % per) % per;
	if (n % 2 == 0) {
		return {c, d};
	}
	return {d, (c + d) % per};
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n).first << endl;
	return 0;
}
