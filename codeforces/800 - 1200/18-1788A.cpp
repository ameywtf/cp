#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n+1);
        bool nf = 1;
        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        for(int k = 1; k < n; k++) {
            int num1 = 0;
            int num2 = 0;

            for(int i = 1; i <= k; i++) {
                if(v[i] == 2) {
                    num1++;
                }
            }

            for(int i = 1; (k+i) <= n; i++) {
                if(v[k+i] == 2) {
                    num2++;
                }
            }

            if(num1 == num2) {
                cout << k << '\n';
                nf = 0;
                break;
            }
        } 
        if(nf) {
            cout << -1 << '\n';
        }
    }
    return 0;
}
