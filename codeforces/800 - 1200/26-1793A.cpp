#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a, b, n, m;
        cin >> a >> b >> n >> m;

        int q = n/(m+1);
        int r = n - q * (m+1);
        cout << q * min(a * m, b * (m+1)) + r*min(a, b) << '\n';
    }
    return 0;
}
