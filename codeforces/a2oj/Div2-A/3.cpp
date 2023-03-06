#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string ans = "";
    unordered_set<char> v = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    for(int i = 0; i < s.length(); i++) {
        if(v.find(s[i] ) != v.end()) {
            continue;
        } else {
            ans += '.';
        }

        if((int)s[i] < (int)'a') {
            ans += (int)s[i] + 32;
        } else {
            ans += s[i];
        }
    }

    cout << ans << '\n';
    return 0;
}
