/**
 * https://www.acmicpc.net/problem/2729
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string sumBi(string strA, string strB);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	cin >> N;
	
	vector<string> answer(N);
	for (int i = 0; i < N; ++i) {
		string strA, strB;
		cin >> strA >> strB;
		answer[i] = sumBi(strA, strB) ;
	}
	
	for (int i = 0; i < N; ++i) {
		cout << answer[i] << endl;
	}
	
	return 0;
}

string sumBi(string strA, string strB) {
	size_t max_len = max(strA.length(), strB.length());
	if (strA.length() < max_len) {
		strA.insert(0, max_len - strA.length(), '0');
	}
	if (strB.length() < max_len) {
		strB.insert(0, max_len - strB.length(), '0');
	}
	reverse(strA.begin(), strA.end());
	reverse(strB.begin(), strB.end());
	
	int upper = 0;
	string ret(max_len, '0');
	for (int i = 0; i < max_len; ++i) {
		int sumAB = (strA[i] - '0') + (strB[i] - '0') + upper;
		ret[i] = (sumAB % 2) + '0';
		upper = sumAB / 2;
	}
	if (upper == 1) {
		ret.insert(ret.length(), 1, '1');
	}
	reverse(ret.begin(), ret.end());
	
	size_t pos = ret.find_first_not_of('0');
	if (pos != string::npos) {
		ret = ret.substr(pos);
	}
	else {
		ret = "0";
	}
	
	return ret;
}

