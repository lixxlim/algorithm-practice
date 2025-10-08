/**
 * https://www.acmicpc.net/problem/2204
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n) {
		string result = "~";
		string inp;
		for (int i = 0; i < n; ++i) {
			cin >> inp;
			string result_low = result;
			string inp_low = inp;
			transform(result_low.begin(), result_low.end(), result_low.begin(), [](unsigned char c){ return tolower(c); });
			transform(inp_low.begin(), inp_low.end(), inp_low.begin(), [](unsigned char c){ return tolower(c); });
			result = result_low < inp_low ? result : inp;
		}
		cout << result << endl;
		cin >> n;
	}
	return 0;
}
