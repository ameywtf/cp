// Two Elevators
#include <bits/stdc++.h>

using namespace std;

int main() {
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    string full = "";

    for (int i = 0; i < 54; i++) {
        full += "Yes";
    }

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;

        if (full.find(s) != -1) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}