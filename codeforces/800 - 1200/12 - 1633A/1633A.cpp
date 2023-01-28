#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;

        if (num % 7 == 0) {
            cout << num << '\n';
        } else {
            int ans = -1;
            for (int j = 0; j < 10; j++) {
                if ((num - num % 10 + j) % 7 == 0) {
                    ans = num - num % 10 + j;
                }
            }
            cout << ans << '\n';
        }
    }

    return 0;
}