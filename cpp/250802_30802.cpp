/**
 * https://www.acmicpc.net/problem/30802
 */
#include <iostream>
#include <algorithm>

constexpr int size = 6;

int main() {
	int N;
	int arr[size];
	int T, P;
	int result[3] = {};
	
	// input
	std::cin >> N;
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}
	std::cin >> T >> P;
	
	// calcurate T-shorts
	for (int i = 0; i < size; ++i) {
		result[0] += (arr[i] + T - 1) / T;
	}
	
	// calcurate pencil
	result[1] = N / P;
	result[2] = N % P;
	
	// output
	std::cout << result[0] << std::endl;
	std::cout << result[1] << " " << result[2] << std::endl;
	return 0;
}
