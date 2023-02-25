#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    for(int i = 0; i < m; i++) {
        int num;
        cin >> num;
        sum += a[num-1];
    }

    cout << sum << '\n';

    return 0;
}
