// Spelling Check
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int it = 0; it < t; it++) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n > 5 || n < 5) {
            cout << "NO" << '\n';
            continue;
        }

        unordered_map<char, int> m(0);

        for (int j = 0; j < n; j++) {
            if (s[j] == 'T' || s[j] == 'i' || s[j] == 'm' || s[j] == 'u' || s[j] == 'r') {
                m[s[j]]++;
            }
        }

        int count = 0;
        for (auto e : m) {
            if (e.second == 1) {
                count++;
            }
        }
        if (count == 5) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}