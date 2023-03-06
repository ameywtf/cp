#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        
        bool valid = false;
        for(int i = 0; i < n; i++) {
            for(int j = i+2; j < n; j++) {
                if(v[i] == v[j]) {
                    valid = true;
                }
            }
        }

        if(valid) {
            cout << "Yes" <<'\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
