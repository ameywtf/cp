#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        int ans = 0;

        if(n == m && n == 1) {
            cout << 0 << '\n';
            continue;
        }

        if(n >= m) { 
            ans = n - 1 + m - 1 + m;
        } else {
            ans = n - 1 + m - 1 + n;
        }


        cout << ans << '\n';
    }

    return 0;
}
