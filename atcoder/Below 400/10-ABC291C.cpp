#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    map<pair<int, int>, int> m;
    pair<int, int> cod = {0LL, 0LL};
    m[cod]++;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
            cod.first+=1;
        } else if(s[i] == 'L') {
            cod.first-=1;
        } else if(s[i] == 'U') {
            cod.second+=1;
        } else {
            cod.second-=1;
        }
    
        m[cod]++;
        if(m[cod] > 1) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No"; 

    return 0;
}
