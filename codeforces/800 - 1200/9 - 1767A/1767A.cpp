// Cut the triangle
#include <bits/stdc++.h>

using namespace std;

#define int long long

/*
1 1
1 3
2 2
*/

signed main() {
    int t;
    cin >> t;

    // vector<string> ans;

    for (int i = 0; i < t; i++) {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        cin >> x3 >> y3;

        // considering x1 & y1
        int x = x1;
        int y = 100000001;

        if ((x > x2 && x3 > x) || (x < x2 && x3 < x)) {
            cout << "yes" << '\n';
            continue;
        } else {
            x = 100000001;
            y = y1;
            if ((y > y2 && y3 > y) || (y < y2 && y3 < y)) {
                cout << "yes" << '\n';
                continue;
            }
        }

        x = x2;
        y = 100000001;
        if ((x > x1 && x3 > x) || (x < x1 && x > x3)) {
            cout << "yes" << '\n';
            continue;
        } else {
            x = 100000001;
            y = y2;
            if ((y > y1 && y3 > y) || (y < y1 && y3 < y)) {
                cout << "yes" << '\n';
                continue;
            }
        }

        x = x3;
        y = 100000001;
        if ((x > x2 && x1 > x) || (x < x2 && x > x1)) {
            cout << "yes" << '\n';
            continue;
        } else {
            x = 100000001;
            y = y3;
            if ((y > y2 && y1 > y) || (y < y2 && y1 < y)) {
                cout << "yes" << '\n';
                continue;
            }
        }

        cout << "no" << '\n';
    }

    return 0;
}