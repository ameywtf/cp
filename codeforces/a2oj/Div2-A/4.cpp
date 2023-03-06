#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    string l1 = "";
    string l2 = "";

    for(char c : s1) {
        l1 += tolower(c);
    }

    for(char c : s2) {
        l2 += tolower(c);
    }
    
    if(l1 < l2) {
        cout << -1 << '\n';
    } else if(l1 > l2) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}
