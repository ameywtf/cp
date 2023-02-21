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
        
        int minX = 0;
        int minY = 0;
        int maxX = 0;
        int maxY = 0;
        
        for(int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;

            minX = min(x, minX);
            minY = min(y, minY);
            maxX = max(x, maxX);
            maxY = max(y, maxY);
        }

        cout << 2 * (maxX + maxY - minX - minY) << '\n';
    }

    return 0;
}
