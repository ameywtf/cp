#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        cout << min(pow(max(2*a, b), 2), pow(max(a, 2*b), 2)) << '\n';
    }

    return 0;
}
