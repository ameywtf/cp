#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<pair<int, int>, int> m{{{0,0}, 0}};
    
    int currTime = 0;
    int ans = 1e9;
    
    vector<pair<char, int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    pair<int, int> currCell = {0,0};
    for(auto &[c, t] : v) {
        for(int i = 0; i < t; i++) {
            currTime += 1;
            if(c == 'N') {
                currCell.second+=1;
            } else if(c == 'E') {
                currCell.first+=1;
            } else if(c == 'W') {
                currCell.first-=1;
            } else {
                currCell.second-=1;
            }
            if(m.count(currCell)) {
                ans = min(currTime - m[currCell], ans);
            }
            m[currCell] = currTime;
        }
    }
    
    if(ans == 1e9) {
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }

    return 0;
}
