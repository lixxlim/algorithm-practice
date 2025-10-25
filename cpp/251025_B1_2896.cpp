/**
 * https://www.acmicpc.net/problem/2896
 */
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    double A, B, C;
    double I, J, K;
    cin >> A >> B >> C;
    cin >> I >> J >> K;

    double x = min(A / I, min(B / J, C / K));

    cout << fixed << setprecision(6);
    cout << A - I * x << " " << B - J * x << " " << C - K * x << endl;

    return 0;
}

