#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> v(2*n);
    for(int i = 0; i < 2*n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    
    int ans = 1e9;

    //loop through all possibilities of people to put into single kayaks
    //
    //s stores people in tandem kayaks 
    //loop through everyone except the person i & j 
    //who're being put into single kayaks
    //
    //curr stores instability of the current process 
    //
    //then take the min of curr and ans
    for(int i = 0; i < 2*n; i++) {
        for(int j = i+1; j < 2*n; j++) {
            vector<int> s;

            for(int k = 0; k < 2*n; k++) {
                if(k != i && k != j) {
                    s.push_back(v[k]);
                }
            }

            int curr = 0;

            for(int k = 0; k < 2*n - 2; k+=2) {
                curr += (s[k+1] - s[k]);
            }

            ans = min(ans, curr);
        }
    }
    
    cout << ans << '\n';
    return 0;
}
