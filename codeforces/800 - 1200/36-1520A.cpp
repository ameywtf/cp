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

        bool valid = true;

        for(int c = 'A'; c <= 'Z'; c++) {
            int first = n;
            int last = -1;

            for(int i = 0; i < n; i++) {
                if(s[i] == c) {
                    first = min(i, first);
                    last = max(i, last);
                }
            }
            for(int i = first; i <= last; i++) {
                if(s[i] != c) {
                    valid = false;
                    break;
                }
            }

            if(!valid) {
                break;
            }
        }

        if(valid) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }


    }
    return 0;
}
