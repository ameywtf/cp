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

        if(s.length() <= 10) {
            cout << s << '\n';
            continue;
        }

        string ans = s[0] + to_string(s.length()-2) + s[s.length()-1];
        cout << ans << '\n';
    }
    return 0;
}
