#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, s, r;
        cin >> n >> s >> r;

        int ans = 0;

        int val = s - r;
        
        int sum = val+n-1;

        vector<int> die(n);
        die[n-1] = val;

        for(int i = 0; i < n-1; i++) {
            die[i] = 1;
        }

        if(s - sum) {
            for(int i = 0; i < n-1; i++) {
                if(s == sum) {
                    break;
                }
                sum -= die[i];
                die[i] = min(s - sum, val);
                sum += die[i];
            }
        }
        
        for(int i = 0; i < n; i++) {
            cout << die[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
