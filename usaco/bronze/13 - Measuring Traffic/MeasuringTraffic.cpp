#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n;
    cin >> n;

    string s[100];
    int t[100];
    int e[100];

    for (int i = 0; i < n; i++) {
        cin >> s[i] >> t[i] >> e[i];
    }

    int a = -10000, b = 10000;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == "none") {
            a = max(a, t[i]);
            b = min(b, e[i]);
        } else if (s[i] == "on") {
            a -= e[i];
            b -= t[i];
            a = max(0, a);
            b = max(0, b);
        } else {
            a += t[i];
            b += e[i];
        }
    }
    cout << a << " " << b << '\n';

    a = -10000;
    b = 10000;
    for (int i = 1; i < n; i++) {
        if (s[i] == "none") {
            a = max(a, t[i]);
            b = min(b, e[i]);
        } else if (s[i] == "on") {
            a += t[i];
            b += e[i];
        } else {
            a -= e[i];
            b -= t[i];
            a = max(0, a);
            b = max(0, b);
        }
    }
    cout << a << " " << b << '\n';

    return 0;
}