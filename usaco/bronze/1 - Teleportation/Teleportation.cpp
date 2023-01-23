#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;

    cin >> a >> b >> x >> y;

    int c1 = abs(a - b);

    int c2 = abs(a - x) + abs(y - b);

    int c3 = abs(a - y) + abs(x - b);

    cout << min(c1, min(c2, c3));

    return 0;
}