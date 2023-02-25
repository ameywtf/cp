#include<bits/stdc++.h>

using namespace std;

#define _USE_MATH_DEFINES


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;
        
        string pi = "314159265358979323846264338327950288419716939937510";

        int ans = 0;

        for(int i = 0; i < 30; i++) {
            if(str[i] == pi[i]) {
                ans++;
            } else {
                break;
            }
        }

        cout << ans << '\n';

    }

    return 0;
}
