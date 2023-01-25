#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int len;
        string str;
        cin >> len;
        cin >> str;

        if (len == 1) {
            cout << "NO" << '\n';
            continue;
        }

        for (int j = 0; j < len - 1; j++) {
            string newStr = str.substr(j, 2);

            if ((str.find(newStr) != str.rfind(newStr, j + 1)) && (str.rfind(newStr, j + 1) - str.find(newStr) >= 2)) {
                cout << "YES" << '\n';
                break;
            } else if (j == len - 2) {
                cout << "NO" << '\n';
            }
        }
    }

    return 0;
}