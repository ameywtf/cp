#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    string a[9][8];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 9; j++) {
            string s = "        ";
            j&& cin >> s;
            for (int k = 0; k < 8; k++) {
                a[j][k] = s[k];
            }
        }

        bool out = false;
        for (int j = 1; j < 9; j++) {
            int count = 0;
            for (int k = 0; k < 8; k++) {
                if (a[j][k] == "R") {
                    count++;
                }

                if (count == 8) {
                    cout << "R" << '\n';
                    out = true;
                    break;
                }
            }
            if (out) {
                break;
            }
        }

        if (out == false) {
            cout << "B" << '\n';
        }
    }
}