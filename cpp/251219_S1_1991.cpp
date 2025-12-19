/**
 * https://www.acmicpc.net/problem/1991
 */
#include <bits/stdc++.h>
using namespace std;

char leftChild[26], rightChild[26];

void preorder(char node) {
    if (node == '.') return;
    cout << node;
    preorder(leftChild[node - 'A']);
    preorder(rightChild[node - 'A']);
}

void inorder(char node) {
    if (node == '.') return;
    inorder(leftChild[node - 'A']);
    cout << node;
    inorder(rightChild[node - 'A']);
}

void postorder(char node) {
    if (node == '.') return;
    postorder(leftChild[node - 'A']);
    postorder(rightChild[node - 'A']);
    cout << node;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        char node, l, r;
        cin >> node >> l >> r;
        leftChild[node - 'A'] = l;
        rightChild[node - 'A'] = r;
    }

    preorder('A');
    cout << '\n';
    inorder('A');
    cout << '\n';
    postorder('A');

    return 0;
}

