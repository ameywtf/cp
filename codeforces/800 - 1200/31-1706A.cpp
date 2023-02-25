#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        string str = "";
        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < m; i++) {
            str += 'B';
        }

        for(int i = 0; i < n; i++) {
            if(str[min(v[i], m+1-v[i]) - 1] == 'B') {
                str[min(v[i], m+1-v[i]) - 1] = 'A';
            } else {
                str[max(v[i], m+1-v[i]) - 1] = 'A';
            }
        }
        cout << str << '\n';
    }

    return 0;
}
