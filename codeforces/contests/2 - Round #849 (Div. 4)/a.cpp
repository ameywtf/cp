#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    string str = "codeforces";
    for (int i = 0; i < t; i++) {
        char c;
        cin >> c;

        if (str.find(c) != -1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}