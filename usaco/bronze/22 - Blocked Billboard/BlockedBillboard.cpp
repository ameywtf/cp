#include <bits/stdc++.h>

using namespace std;

struct Rect {
    int x1, y1, x2, y2;

    int area() {
        return (x2 - x1) * (y2 - y1);
    }
};

int intersectingArea(Rect b, Rect t) {
    int x1 = max(b.x1, t.x1);
    int y1 = max(b.y1, t.y1);
    int x2 = min(b.x2, t.x2);
    int y2 = min(b.y2, t.y2);

    int area = max(0, x2 - x1) * max(0, y2 - y1);

    return area;
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, y1, x2, y2;

    Rect b1;

    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;

    Rect b2;

    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;

    Rect t;

    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;

    int area = (b1.area() + b2.area()) - intersectingArea(b1, t) - intersectingArea(b2, t);

    cout << area << '\n';
    return 0;
}