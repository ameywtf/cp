#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    vector<int> ans;
    ans = v;
    p-=1;
    q-=1;
    r-=1;
    s-=1;

    for(int j = 0; j <= (q-p); j++) {
        ans[p+j] = v[r+j];
        ans[r+j] = v[p+j];
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    return 0;
}
