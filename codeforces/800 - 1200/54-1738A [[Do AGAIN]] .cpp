#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first;
        }

        for(int i = 0; i < n; i++) {
            cin >> v[i].second;
        }

        vector<int> fire;
        vector<int> frost;

        for(int i = 0; i < n; i++) {
            if(v[i].first == 0) {
                fire.push_back(v[i].second);
            } else {
                frost.push_back(v[i].second);
            }
        }
        
        vector<int> bigArr;
        vector<int> smallArr;

        sort(fire.begin(), fire.end(), greater<int>());
        sort(frost.begin(), frost.end(), greater<int>());

        if(fire > frost) {
            bigArr = fire; 
            smallArr = frost;
        } else {
            bigArr = frost;
            smallArr = fire;
        }

        int minIndex = min(bigArr.size(), smallArr.size());
        int maxIndex = max(bigArr.size(), smallArr.size());
        
        int sum = 0;
        if(minIndex > 1) {
            if(smallArr.back() > bigArr.back()) {
                sum = bigArr.back();
                bigArr[bigArr.size()-1] = 0;
            } else {
                sum = smallArr.back();
                smallArr[smallArr.size()-1] = 0;
            }
        } 

        for(int i = 0; i < minIndex; i++) {
            sum+=2*smallArr[i];
            smallArr[i] = 0;
            sum+=2*bigArr[i];
            bigArr[i] = 0;
        }

        for(int i = 0; i < bigArr.size(); i++) {
            sum += bigArr[i];
        }
        for(int i = 0; i < smallArr.size(); i++) {
            sum += smallArr[i];
        }
        
        cout << sum << '\n';
    }
    return 0;
}
