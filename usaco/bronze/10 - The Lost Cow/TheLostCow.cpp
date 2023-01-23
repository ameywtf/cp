#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;

    int ans = 0;
    int dir = 1;
    int by = 1;

    while (true) {
        if ((dir == 1 && x <= y && y <= x + by) || (dir == -1 && x >= y && x - by <= y)) {
            ans += abs(x - y);
            cout << ans << '\n';
            break;
        } else {
            ans += by * 2;
            by *= 2;
            dir *= -1;
        }
    }
    return 0;
}