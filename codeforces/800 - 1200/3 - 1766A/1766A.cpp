// Extremely Round
#include <bits/stdc++.h>

using namespace std;

vector<int> v(1000000, 0);
int ans = 0;

void solve() {
    for (int i = 1; i <= 999999; i++) {
        if (i < 10) {
            ans = i;
            v[i] = ans;
            continue;
        }
        int num = i;
        while (num % 10 == 0) {
            num = num / 10;
            if (num < 10) {
                ans++;
                break;
            }
        }
        v[i] = ans;
    }
}

int main() {
    solve();
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        cout << v[n] << '\n';
    }
    return 0;
}