#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i <n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        
        int ans = 1e9;
        for(int i = 0; i < n-2; i++) {
            ans = min(v[i+2] - v[i], ans);
        }
        
        cout << ans << '\n';
    }
    return 0;
}
