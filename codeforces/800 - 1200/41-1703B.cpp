#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        unordered_map<char, int> m;
        
        for(int i = 'A'; i <= 'Z'; i++) {
            m[(char)i] = 0;
        }
        int total = 0;
        for(int i = 0; i < n; i++) {
            if(m[s[i]] == 0) {
                total += 2;
                m[s[i]]++;
            } else {
                total++;
            }
        }

        cout << total << '\n';
    }

    return 0;
}
