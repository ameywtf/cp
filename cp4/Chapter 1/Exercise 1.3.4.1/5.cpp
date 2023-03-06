#include <bits/stdc++.h>

using namespace std;

int main() {
//    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    regex smth("\b[a-z][0-9]{2}\b");

    cout << regex_replace(s, smth, "***") << '\n';
    return 0;
}
