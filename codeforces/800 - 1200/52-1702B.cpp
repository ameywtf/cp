#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;

        set<char> s;
        int ans = 0;
        for(int i = 0; i < str.length(); i++) {
            s.insert(str[i]);
            if(s.size() >  3) {
                ans++;
                s.clear();
                s.insert(str[i]);
            }
        }

        if(!s.empty()) ans++;
        cout << ans << '\n';

    }
    return 0;
}
