#include <bits/stdc++.h>

using namespace std;

unordered_set<string> getHighest(unordered_map<string, int> &m) {
    unordered_set<string> rank;
    
    int hi = -1;
    for(auto e : m) {
        hi = max(e.second, hi);
    }

    for(auto e : m) {
        if(hi <= e.second) {
            rank.insert(e.first);
        }
    }

    return rank;
}

int main() {
    freopen("measurement.in", "r", stdin);
    freopen("measurement.out","w", stdout);
    int n;
    cin >> n;

    vector<tuple<int, string, int>> v(n);

    for(int i = 0; i < n; i++) {
        cin >> get<0>(v[i]) >> get<1>(v[i]) >> get<2>(v[i]);
    }

    sort(v.begin(), v.end());

    unordered_map<string, int> m = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};

    int ans = 0;
    unordered_set<string> currHighest = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};
    unordered_set<string> prevHighest = {{"Bessie", 7}, {"Elsie", 7}, {"Mildred", 7}};
    for(int i = 0; i < n; i++) {
        m[get<1>(v[i])] += get<2>(v[i]);
        currHighest = getHighest(m);
        if(prevHighest != currHighest) {
            ans++;
        }
        prevHighest = getHighest(m);
    }

    cout << ans << '\n';
    return 0;
}
