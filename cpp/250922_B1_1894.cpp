/**
 * https://www.acmicpc.net/problem/1894
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4) {
        double ax, ay, bx, by, cx, cy;
        if (x1 == x3 && y1 == y3) {
            ax = x1; ay = y1; bx = x2; by = y2; cx = x4; cy = y4;
        } else if (x1 == x4 && y1 == y4) {
            ax = x1; ay = y1; bx = x2; by = y2; cx = x3; cy = y3;
        } else if (x2 == x3 && y2 == y3) {
            ax = x2; ay = y2; bx = x1; by = y1; cx = x4; cy = y4;
        } else {
            ax = x2; ay = y2; bx = x1; by = y1; cx = x3; cy = y3;
        }

        double dx = bx + cx - ax;
        double dy = by + cy - ay;

        cout << fixed << setprecision(3) << dx << " " << dy << "\n";
    }
    return 0;
}

