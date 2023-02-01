#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }

        if (n == 2 && v[0] == 1 && v[1] == 1) {
            cout << -2 << '\n';
            continue;
        }

        bool found = false;
        for (int j = 0; j < n - 1; j++) {
            if (v[j] == -1 && v[j + 1] == -1) {
                v[j] = 1;
                v[j + 1] = 1;
                found = true;
                break;
            }
        }

        if (found) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                sum += v[j];
            }
            cout << sum << '\n';
            continue;
        }

        int sum = 0;
        for (int j = 0; j < n - 1; j++) {
            if (v[j] == -1 && v[j + 1] == 1) {
                v[j] = 1;
                v[j + 1] = -1;
                found = true;
                break;
            } else if (v[j + 1] == -1) {
                v[j + 1] = 1;
                v[j] = -1;
                found = true;
                break;
            }
        }

        if (found) {
            for (int j = 0; j < n; j++) {
                sum += v[j];
            }
            cout << sum << '\n';
            continue;
        }

        cout << n - 2 - 2 << '\n';
    }
    return 0;
}