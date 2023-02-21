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
        string str;
        cin >> str;
        
        if(n == 2 && str[0] == str[1]) {
            cout << "NO" << '\n';
            continue;
        }
        int yes = true;
        for(int i = 1; i < n; i+=3) {
            if(str[i] != str[i+1]) {
                yes = false;
                break;
            }
        }
        if(yes) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }

    }

    return 0;
}
