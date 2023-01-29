#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int lenA, lenB;
        cin >> lenA >> lenB;
        vector<int> a(lenA);
        vector<int> b(lenB);
        vector<int> common;

        for (int j = 0; j < lenA; j++) {
            cin >> a[j];
        }

        for (int j = 0; j < lenB; j++) {
            cin >> b[j];
        }

        for (int j = 0; j < lenA; j++) {
            for (int k = 0; k < lenB; k++) {
                if (a[j] == b[k]) {
                    common.push_back(a[j]);
                }
            }
        }

        if (common.size() >= 1) {
            cout << "YES"
                 << '\n'
                 << 1 << ' ' << common[0] << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}