/**
 * https://www.acmicpc.net/problem/2501
 */
#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int* arr = new int[K]();
	
	int i = 0;
	int t = 0;
	while( t++ < N && i < K ) {
		if(N % t == 0) {
			arr[i++] = t;
		}
	}
	cout << arr[K-1] << endl;
	
	delete[] arr;
	return 0;
}
