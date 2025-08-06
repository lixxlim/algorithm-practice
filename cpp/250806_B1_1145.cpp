/**
 * https://www.acmicpc.net/problem/1145
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

long long lcm_multiple(const vector<int>& nums) {
    long long result = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        result = lcm(result, nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums(5);
    for (int i = 0; i < 5; ++i) cin >> nums[i];

    long long min_lcm = LLONG_MAX;

    for (int r = 3; r <= 5; ++r) {
        vector<bool> select(5, false);
        fill(select.begin(), select.begin() + r, true);

        do {
            vector<int> subset;
            for (int i = 0; i < 5; ++i) {
                if (select[i]) subset.push_back(nums[i]);
            }

            long long current_lcm = lcm_multiple(subset);
            min_lcm = min(min_lcm, current_lcm);

        } while (prev_permutation(select.begin(), select.end()));
    }

    cout << min_lcm << endl;
    return 0;
}

