// Extremely Round
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    vector<int> v(1000000, 0);
    v[10] = 10;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (v[n]) {
            cout << v[n] << '\n';
            continue;
        }

        int ans = 0;
        if (n < 10) {
            cout << n << '\n';
            continue;
        } else {
            for (int j = 10; j <= n; j += 2) {
                if (v[j]) {
                    ans = v[j];
                    continue;
                }
                if (j >= 10) {
                    int num = j;
                    while (num % 10 == 0) {
                        num = num / 10;
                        if (num < 10) {
                            ans++;
                            v[j] = ans;
                            break;
                        }
                    }
                }
            }
            cout << ans << '\n';
        }
    }

    return 0;
}