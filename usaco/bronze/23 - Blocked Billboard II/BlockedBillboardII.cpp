#include <bits/stdc++.h>

using namespace std;

#define int long long

bool containsCorner(int x, int y, int x1, int y1, int x2, int y2) {
    return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, x2, x3, x4, y1, y2, y3, y4;

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int corners = 0;

    if (containsCorner(x1, y1, x3, y3, x4, y4)) corners++;
    if (containsCorner(x1, y2, x3, y3, x4, y4)) corners++;
    if (containsCorner(x2, y1, x3, y3, x4, y4)) corners++;
    if (containsCorner(x2, y2, x3, y3, x4, y4)) corners++;

    if (corners == 4) {
        cout << 0 << '\n';
    } else if (corners < 2) {
        cout << (x2 - x1) * (y2 - y1) << '\n';
    } else {
        int br_x = max(x1, x3);
        int tr_x = min(x2, x4);
        int br_y = max(y1, y3);
        int tr_y = min(y2, y4);
        cout
            << (x2 - x1) * (y2 - y1) - (tr_x - br_x) * (tr_y - br_y) << '\n';
    }

    return 0;
}

// if ((b1.x1 < b2.x1 && b1.y1 > b2.y2) ||
//     (b1.x1 < b2.x2 && b1.y1 < b2.y2) ||
//     (b1.x1 > b2.y2 && b1.y1 < b2.y2) ||
//     (b1.x1 > b2.x2 && b1.y1 > b2.y2)) {
//     cout << b1.area() << '\n';
// }