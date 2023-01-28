#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string input;
        cin >> input;

        string str = "";
        for (char x : input) {
            str += tolower(x);
        }

        if (str == "yes") {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}