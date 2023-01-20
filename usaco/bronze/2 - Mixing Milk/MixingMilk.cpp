#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector<int> c(3);
    vector<int> m(3);
    for (int i = 0; i < 3; i++) {
        cin >> c[i] >> m[i];
    }

    for (int i = 0; i < 100; i++) {
        int b1 = i % 3;
        int b2 = (i + 1) % 3;

        if (m[b1] + m[b2] <= c[b2]) {
            m[b2] = m[b1] + m[b2];
            m[b1] = 0;
        } else {
            int prev_b2 = m[b2];
            m[b2] = c[b2];
            m[b1] = m[b1] - (m[b2] - prev_b2);
        }
    }

    cout << m[0] << '\n'
         << m[1] << '\n'
         << m[2] << '\n';

    return 0;
}