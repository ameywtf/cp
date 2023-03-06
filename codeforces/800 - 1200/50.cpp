#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;
        vector<int> v(s.length());

        for(int i = 0; i < s.length(); i++) {
            v[i] = (int)s[i] - 96;
        }

        int minDiff = 1e9;
        int maxDiff = -1;
        for(int i = 1; i < s.length(); i++) {
            int diff = abs(v[0] - v[i]);
            minDiff = min(minDiff, diff);
            maxDiff = max(diff, maxDiff);
        }
        
        int moves = 0;
        int cost = 0;
        vector<int> selected;
        for(int i = 1; i < s.length(); i++) {
            if(abs(v[0] - v[i]) <= minDiff) {
                moves++;
                cost += abs(v[0]-v[i]);
                minDiff = maxDiff;
                selected.push_back(i);
            }
        }

        cout << cost- << ' ' << moves << '\n';

        for(int i = 0; i < selected.size(); i++) {
            cout << selected[i] << ' ';
        }

        cout << '\n';
    }

    return 0;
}
