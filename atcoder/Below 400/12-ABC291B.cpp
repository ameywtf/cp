#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    n *= 5;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < (n/5); i++) {
        v.pop_back();
        v.erase(v.begin());
    }
    
    double ans = 0.0;
    for(int i = 0; i < v.size(); i++) {
        ans+=v[i];
    }
    
    cout << ans/(3*(n/5)) << '\n';

    return 0;
}
