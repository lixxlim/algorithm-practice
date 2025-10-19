/**
 * https://www.acmicpc.net/problem/2755
 */
#include <iostream>
#include <string>
#include <unordered_map>
#include <iomanip>
#include <cmath>
using namespace std;

double getPoint(const string& rs);

int main() {
	int N;
	cin >> N;
	int total_time = 0;
	double total_rs = 0.0;
	for (int i = 0; i < N; ++i) {
		string course_name;
		int time;
		string rs;
		cin >> course_name >> time >> rs;
		total_time += time;
		total_rs += getPoint(rs) * time;
	}
	double answer = round((total_rs / total_time) * 100) / 100;
	cout << fixed << setprecision(2) << answer << endl;
	return 0;
}

double getPoint(const string& rs) {
	static const unordered_map<string, double> gradeMap = {
		{"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7},
		{"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7},
		{"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7},
		{"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
		{"F", 0.0}
	};
	
	auto it = gradeMap.find(rs);
	return (it != gradeMap.end()) ? it->second : 0.0;
}
