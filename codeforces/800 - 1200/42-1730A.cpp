#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, c;
        cin >> n >> c;

        unordered_map<int, int> m;

        for(int i = 0; i < n; i++) {
            int num;
            cin >> num;
            m[num]++;
        }
        int cost = 0;
        for(auto e : m) {
            if(e.second >= c) cost += c;
            else 
                cost += e.second;
        }

        cout << cost << '\n';
    }

    return 0;
}
