#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    ll ans = 1e18;
    for(ll mask = 0; mask < (1 << n); mask++) {
        ll sum1 = 0;
        ll sum2 = 0;
        for(int i = 0; i < n; i++) {
            if(mask & (1 << i)) {
                sum1 += v[i];
            } else {
                sum2 += v[i];
            }
        }

        ans = min(ans, abs(sum1 - sum2));
    }

    cout << ans << '\n';

    return 0;
}
