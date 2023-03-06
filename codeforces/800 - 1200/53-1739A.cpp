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
        int x = n/2 + 1;
        int y = m/2 + 1;
        cout << x << ' ' << y << '\n';
    }

    return 0;
}
