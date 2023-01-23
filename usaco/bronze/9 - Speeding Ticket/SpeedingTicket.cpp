#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    int limit[100], bessie[100];
    int length, speed, pos = 0;

    for (int i = 0; i < n; i++) {
        cin >> length >> speed;

        for (int j = pos; j < pos + length; j++) {
            limit[j] = speed;
        }

        pos += length;
    }

    pos = 0;
    for (int i = 0; i < m; i++) {
        cin >> length >> speed;

        for (int j = pos; j < pos + length; j++) {
            bessie[j] = speed;
        }

        pos += length;
    }

    int maxOver = 0;
    for (int i = 0; i < 100; i++) {
        maxOver = max(bessie[i] - limit[i], maxOver);
    }

    cout << maxOver << '\n';

    return 0;
}