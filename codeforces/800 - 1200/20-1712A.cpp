#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        int ans = 0;
        for(int i = 1; i <= k; i++) {
            if(v[i] > k) {
                ans++;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
