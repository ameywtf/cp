#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("sleepy.in", "r", stdin);
    freopen("sleepy.out", "w", stdout);
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int count = 1;
    for(int i = n-2; i >= 0; i--) {
        if(v[i] < v[i+1]) {
            count++;
        } else {
            break;
        }

    }

    cout << n-count << '\n';

    return 0;
}
