/**
 * https://www.acmicpc.net/problem/3279
 */
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	vector<int> rate(N);
	for (int i = 0; i < N; ++i) cin >> rate[i];
	
	double usd = 100.0;
	double mark = 100.0 * (rate[0] / 100.0);
	
	for (int i = 1; i < N; ++i) {
		double new_usd = max(usd, mark * (100.0 / rate[i]));
		double new_mark = max(mark, usd * (rate[i] / 100.0));
		usd = new_usd;
		mark = new_mark;
	}
	
	cout << fixed << setprecision(2) << usd << endl;
	return 0;
}
