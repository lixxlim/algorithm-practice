/**
 * https://www.acmicpc.net/problem/5568
 */
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int n, k;
vector<string> cards;
set<string> result;

// 순열 생성 함수
void generatePermutations(vector<string>& selected, vector<bool>& used) {
    if (selected.size() == k) {
        string num = "";
        for (const string& s : selected) {
            num += s;
        }
        result.insert(num);
        return;
    }
    
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            selected.push_back(cards[i]);
            generatePermutations(selected, used);
            selected.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        string card;
        cin >> card;
        cards.push_back(card);
    }
    
    vector<string> selected;
    vector<bool> used(n, false);
    
    generatePermutations(selected, used);
    
    cout << result.size() << endl;
    
    return 0;
}

