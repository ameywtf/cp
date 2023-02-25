#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

//    freopen("planting.in", "r", stdin);
//    freopen("planting.out", "w", stdout);

    int n;
    cin >> n;

    vector<int> degree(n+1, 0);
    for(int i = 1; i < n; i++) {
        int x, y;
        cin >> x >> y;

        degree[x]++;
        degree[y]++;
    }

    int ans = 0;

    for(int i = 1; i <= n; i++) {
        ans = max(degree[i], ans);
    }

    cout << ans+1 << '\n';
    return 0;
}
