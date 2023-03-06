#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        string s1;
        cin >> s1;

        string s2;
        cin >> s2;


        
        int c = 0;
        int numA = 0;
        for(int i = 0; i < s2.length(); i++) {
            if(s2[i] != 'a') {
                c++;
            } else {
                numA++;
            }
        }

        if(s2.length() > 1 && numA >= 1) {
            cout << -1 << '\n';
            continue;
        }

        if(numA == s2.length()) {
            cout << 1 << '\n';
            continue;
        }
        
//        int ans = 1;
//        for(int i = 1; i <= (c+1); i++) {
//            ans *= i;
//        }

        cout << setprecision(100) << pow(2, s1.length()) << '\n';
    }

    return 0;
}
