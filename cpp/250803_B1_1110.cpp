/**
 * https://www.acmicpc.net/problem/1110
 */
#include <iostream>

int checkCicle(int n) {
	int first;
	int sumed;
	int merged;
	
	first = n % 10;
	sumed = (n / 10) + (n % 10);
	merged = (first * 10) + (sumed % 10);
	
	return merged;
}

int main() {
	int N;
	int n;
	int cnt = 0;
	
	// input
	std::cin >> N;
	n = N;
	
	// solution
	do  {
		n = checkCicle(n);
		++cnt;
	} while (N != n);
	
	// output
	std::cout << cnt << std::endl;
}
