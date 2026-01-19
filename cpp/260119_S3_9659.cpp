/**
 * https://www.acmicpc.net/problem/9659
 */
#include <iostream>

int main() {
    unsigned long long n;
    std::cin >> n;
    if (n & 1) {
        std::cout << "SK\n";
    } else {
        std::cout << "CY\n";
    }
    return 0;
}

