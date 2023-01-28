#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n;

    vector<pair<int, char>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end());

    vector<int> l(n);
    for (int i = 1; i < n; i++) {
        l[i] += l[i - 1];

        if (v[i - 1].second == 'L' && v[i].first > v[i - 1].first) {
            l[i]++;
        }
    }

    vector<int> r(n);
    for (int i = n - 2; i >= 0; i--) {
        r[i] += r[i + 1];

        if (v[i + 1].second == 'G' && v[i].first < v[i + 1].first) {
            r[i]++;
        }
    }

    for (int i = 0; i < n; i++) {
        ans = min(ans, l[i] + r[i]);
    }

    cout << ans << '\n';

    return 0;
}