#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if((int)s[i] < (int)'a') {
            cout << i+1 << '\n';
            return 0;
        }
    }
    
    return 0;
}
