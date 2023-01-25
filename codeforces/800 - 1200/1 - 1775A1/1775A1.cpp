// Gardener and the Capybaras(easy version)
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    string ans = "";

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        int n = s.length();

        bool out = false;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    string a = s.substr(i, j);
                    string b = s.substr(j, k - j);
                    string c = s.substr(k);
                    if (a <= b && c <= b) {
                        cout << a << " " << b << " " << c << '\n';
                        out = true;
                        break;
                    } else if (b <= a && b <= c) {
                        cout << a << " " << b << " " << c << '\n';
                        out = true;
                        break;
                    }
                }
                if (out) {
                    break;
                }
            }
            if (out) {
                break;
            }
        }
        if (!out) {
            cout << ":(" << '\n';
        }
    }
    return 0;
}
