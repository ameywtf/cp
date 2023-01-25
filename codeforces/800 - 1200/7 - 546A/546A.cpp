#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int ans = 0;
    for (int i = 1; i <= w; i++) {
        ans += (k * i);
    }

    int diff = ans - n;

    cout << ((diff > 0) ? diff : 0);

    return 0;
}