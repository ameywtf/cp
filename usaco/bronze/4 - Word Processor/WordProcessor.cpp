#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n;
    cin >> n;
    int k;
    cin >> k;

    int len = 0;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        len += word.length();
        if (len <= k) {
            if (i != 0) {
                cout << ' ';
            }
            cout << word;
        } else {
            cout << '\n'
                 << word;
            len = word.length();
        }
    }

    return 0;
}