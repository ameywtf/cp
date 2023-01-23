#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int b1, b2, s1, s2, g1, g2, p1, p2;

    cin >> b1 >> b2;
    cin >> s1 >> s2;
    cin >> g1 >> g2;
    cin >> p1 >> p2;

    int b2s = (s2 - s1) + (g2 - g1) + (p2 - p1);
    int s2g = (g2 - g1) + (p2 - p1);
    int g2p = (p2 - p1);

    cout << b2s << '\n'
         << s2g << '\n'
         << g2p << '\n';

    return 0;
}