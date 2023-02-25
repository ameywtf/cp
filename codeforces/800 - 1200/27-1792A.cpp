#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> h(n);
        for(int i = 0; i < n; i++) {
            cin >> h[i];
        }

//        sort(h.begin(), h.end());

        int total = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(h[i] == h[j] && h[i] != 0 && h[i] < 2) {
                    h[i]--;
                    h[j]--;
                    j++;
                    total++;
                }
            }
        }
        for(int i = 0; i < n; i++) {
            if(h[i] != 0) {
                h[i] = 0;
                total++;
            }
        }

        cout << total << '\n';
    }

    return 0;
}
