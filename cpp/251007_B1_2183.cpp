/**
 * https://www.acmicpc.net/problem/2183
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    string S;
    if (!(cin >> N >> S)) return 0;

    vector<int> set_wins(26, 0); 
    vector<int> game_wins(26, 0); 
    vector<int> points(26, 0); 
    int games_in_set = 0; 

    for (char ch : S) {
        int x = ch - 'A';

        bool others_le2 = true;
        for (int i = 0; i < N; ++i) {
            if (i == x) continue;
            if (points[i] > 2) { others_le2 = false; break; }
        }
        if (points[x] == 3 && others_le2) {
            game_wins[x] += 1;
            ++games_in_set;
            fill(points.begin(), points.end(), 0);

            bool set_ended = false;
            if (game_wins[x] >= 6) {
                bool ahead = true;
                for (int i = 0; i < N; ++i) {
                    if (i == x) continue;
                    if (game_wins[x] - game_wins[i] < 2) { ahead = false; break; }
                }
                if (ahead) set_ended = true;
            }

            if (set_ended) {
                if (game_wins[x] == games_in_set) set_wins[x] += 2;
                else set_wins[x] += 1;

                fill(game_wins.begin(), game_wins.end(), 0);
                games_in_set = 0;

                if (set_wins[x] >= 3) {
                    cout << char('A' + x) << '\n';
                    return 0;
                }
            }
            continue;
        }

        if (points[x] == 4) {
            game_wins[x] += 1;
            ++games_in_set;
            fill(points.begin(), points.end(), 0);

            bool set_ended = false;
            if (game_wins[x] >= 6) {
                bool ahead = true;
                for (int i = 0; i < N; ++i) {
                    if (i == x) continue;
                    if (game_wins[x] - game_wins[i] < 2) { ahead = false; break; }
                }
                if (ahead) set_ended = true;
            }

            if (set_ended) {
                if (game_wins[x] == games_in_set) set_wins[x] += 2;
                else set_wins[x] += 1;

                fill(game_wins.begin(), game_wins.end(), 0);
                games_in_set = 0;

                if (set_wins[x] >= 3) {
                    cout << char('A' + x) << '\n';
                    return 0;
                }
            }
            continue;
        }

        bool reduced = false;
        for (int i = 0; i < N; ++i) {
            if (i == x) continue;
            if (points[i] == 4) {
                points[i] -= 1;
                reduced = true;
            }
        }
        if (reduced) continue;

        points[x] += 1;
    }

    int best = 0;
    for (int i = 1; i < N; ++i) {
        if (set_wins[i] > set_wins[best]) best = i;
    }
    cout << char('A' + best) << '\n';
    return 0;
}

