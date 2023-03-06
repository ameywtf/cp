#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            v[i][j] = static_cast<int>(s[j]) - 48;
//            cout << v[i][j] << ' ';
        }
//        cout << '\n';
    }

    if(n == 1) {
        cout << 1 << '\n';
        return 0;
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        bool valid = false;
        for(int j = 0; j < m; j++) {
            bool succ = true;
            int currMarks = v[i][j];
            for(int k = 0; k < n; k++) {
                if(currMarks < v[k][j]) {
                     succ = false;
                } 
            }
            if(succ) {
                valid = true;
            }
        }
        if(valid) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
