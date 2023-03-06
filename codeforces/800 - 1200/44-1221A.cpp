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

        multiset<int> s;

        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            s.insert(num);
        }
        
        int sum = 0;
        bool flag = false;

        for(auto e : s) {
            if(e > 2048) {
                continue;
            }
            sum += e;
            if(sum >= 2048) {
                flag = true;
                break;
            }
        }
        if(flag) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }

    return 0;
}
