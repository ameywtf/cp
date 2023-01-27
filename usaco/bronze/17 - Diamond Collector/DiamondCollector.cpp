#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n;
    int k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int currMax = 1;
        for (int j = 0; j < n; j++) {
            if (v[i] >= v[j] && (j != 0 || i != 0) && (j != i) && abs(v[i] - v[j]) <= k) {
                currMax++;
            }
        }
        ans = max(ans, currMax);
    }

    cout << ans << '\n';

    return 0;
}