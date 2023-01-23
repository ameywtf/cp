#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    vector<int> id(n);
    for (int i = 0; i < n; i++) {
        cin >> id[i];
    }

    for (int i = 0; i < 3; i++) {
        vector<int> prev(n);
        for (int j = 0; j < n; j++) {
            prev[j] = id[s[j] - 1];
        }
        id = prev;
    }

    for (int i = 0; i < n; i++) {
        cout << id[i] << '\n';
    }

    return 0;
}
