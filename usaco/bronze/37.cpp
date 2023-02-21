#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("outofplace.in", "r", stdin);
    freopen("outofplace.out", "w", stdout);

    int n;
    cin >> n;
    
    vector<int> cows(n);
    vector<int> sorted(n);
    for(int i = 0; i < n; i++) {
        cin >> cows[i];
        sorted[i] = cows[i];
    }

    sort(sorted.begin(), sorted.end());

    int swaps = 0;
    
    for(int i = 0; i < n; i++) {
        if(cows[i] != sorted[i]) {
            swaps++;
        }
    }

    cout << max(0, swaps - 1) << '\n';

    return 0;
}
