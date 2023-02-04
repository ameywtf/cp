#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x = 0;
        int y = 0;
        int n;
        cin >> n;
        string str;
        cin >> str;

        bool out = false;

        for (char c : str) {
            if (c == 'L') {
                y -= 1;
            } else if (c == 'R') {
                y += 1;
            } else if (c == 'U') {
                x += 1;
            } else if (c == 'D') {
                x -= 1;
            }

            if (x == 1 && y == 1) {
                cout << "YES" << '\n';
                out = true;
                break;
            }
        }
        if (!out) {
            cout << "NO" << '\n';
        }
    }

    return 0;
}