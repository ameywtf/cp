#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int count = n;
        for (int j = 0; j < n / 2; j++) {
            if (str[j] == '0' && str[n - j - 1] == '1' || str[j] == '1' && str[n - j - 1] == '0') {
                count -= 2;
            } else {
                break;
            }
        }

        cout << count << '\n';
    }

    return 0;
}